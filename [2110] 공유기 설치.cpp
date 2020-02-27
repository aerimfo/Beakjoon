// [2110] ������ ��ġ
// https://www.acmicpc.net/problem/2110
// �̺� Ž��(Binary Search)

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<int> &x, int n, int c);
int router(vector<int> &x, int n, int mid);

int main(void)
{
	int n, c; // ���� ����, �������� ����
	scanf("%d %d", &n, &c);
	vector<int> x(n);

	// ���� ��ǥ
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	sort(x.begin(), x.end());
	printf("%d\n", check(x, n, c));
}

int check(vector<int> &x, int n, int c)
{
	int left = 1; // �� ��ǥ�� ���� : 1
	int right = x[n-1]; // ù ��°, ������ �� ������ �Ÿ�
	int answer = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (router(x, n, mid) >= c) {
			left = mid + 1;
			answer = mid;
		}
		else {
			right = mid - 1;
		}
	}
	return answer;
}

int router(vector<int> &x, int n, int mid)
{
	int cnt = 1, tmp = 0;
	for (int i = tmp + 1; i < n; i++) {
		if ((x[i] - x[tmp]) >= mid) {
			cnt++;
			tmp = i;
		}
	}
	return cnt;
}