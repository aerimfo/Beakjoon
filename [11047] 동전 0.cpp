// [11047] ���� 0
// https://www.acmicpc.net/problem/11047
// �׸��� �˰���

#include <cstdio>
using namespace std;

int main(void)
{
	int n, k; // �ر԰� ������ �ִ� ������ ����, ��ġ�� ��
	int a[11]; // ������ ��ġ
	scanf("%d %d", &n, &k);
	int remain = k, cnt = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		if ((remain / a[i]) >= 1) {
			cnt += remain / a[i];
			remain -= (remain / a[i])*a[i];
		}
		if (remain == 0)
			break;
	}
	printf("%d\n", cnt);
}