// [2805] ���� �ڸ���
// https://www.acmicpc.net/problem/2805
// �̺� Ž��

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long long check(vector<long long> &tree, int n, long long m);
long long cut(vector<long long> &tree, int n, long long height);

int main(void)
{
	int n; // ������ ��
	long long m; // ����̰� ������ ���������� �ϴ� ������ ����
	scanf("%d %lld", &n, &m);
	vector<long long> tree(n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &tree[i]);
	}
	sort(tree.begin(), tree.end());
	printf("%d\n", check(tree, n, m));
}

long long check(vector<long long> &tree, int n, long long m)
{
	long long left = 0;
	long long right = tree[n - 1];
	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (cut(tree, n, mid) >= m) {
			left = mid + 1;
			answer = mid;
		}
		else {
			right = mid - 1;
		}
	}
	return answer;
}

long long cut(vector<long long> &tree, int n, long long height)
{
	long long length = 0;
	for (int i = 0; i < n; i++) {
		// �ڸ����� �ϴ� ���̺��� ������ �� ��� -> �ڸ� �� ����
		if (tree[i] > height)
			length += tree[i] - height;

		// ������ ª�Ƽ� �ڸ� �� ���� ���
		else
			;
	}
	return length;
}