/*[1668] Ʈ���� ����*/
/*https://www.acmicpc.net/problem/1668*/
/*22line���� j=n, j>0���� �����ߴ��� Ʋ�� -> n���� ���� �Է¹����� �迭�� ���� ������ �ε����� n-1^^*/

#include <stdio.h>
#define MAX 50

int main(void)
{
	int n; /*Ʈ���� ����*/
	int trophy[MAX], left = 0, right = 0;
	int left_h = 0, right_h = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &trophy[i]);
	for (int i = 0; i < n; i++) /*���ʿ��� �� ��*/
		if (trophy[i] > left_h)
		{
			left++;
			left_h = trophy[i];
		}
	for (int j = n - 1; j >= 0; j--) /*�����ʿ��� �� ��*/
		if (trophy[j] > right_h)
		{
			right++;
			right_h = trophy[j];
		}
	printf("%d\n", left);
	printf("%d", right);
}