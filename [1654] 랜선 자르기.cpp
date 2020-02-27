// [1654] ���� �ڸ���
// https://www.acmicpc.net/problem/1654
// �̺� Ž��
/* ������ 10,000���̰� ��� 1cm�� �ڸ��� 10,000x(2^31-1) ������ ����
  -> left, right, mid, answer ��� long long Ÿ������ ����!! */ 

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<int> &lan, int k, int n);
int make(vector<int> &lan, int k, int length);

int main(void)
{
	int k, n; // �������� �̹� ������ �ִ� ������ ����, �ʿ��� ������ ����
	scanf("%d %d", &k, &n);
	vector<int> lan(k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &lan[i]);
	}
	sort(lan.begin(), lan.end());
	printf("%d\n", check(lan, k, n));
}

int check(vector<int> &lan, int k, int n)
{
	long long left = 1;
	long long right = lan[k - 1];
	long long answer = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (make(lan, k, mid) >= n) {
			left = mid + 1;
			answer = mid;
		}
		else {
			right = mid - 1;
		}
	}
	return answer;
}

int make(vector<int> &lan, int k, int length)
{
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += lan[i] / length;
	}
	return cnt;
}