/* ���ϱ� ����Ŭ */
#include <stdio.h>
int main(void)
{
	int n, n1, a, b, time = 0;
	scanf("%d", &n);
	n1 = n;

	do
	{
		if (n1 < 10) /*�־��� ���� 10���� ���� ���*/
		{
			a = 0, b = n1;
			n1 = b * 10 + (a + b) % 10;
			time++;
		}
		else
		{
			a = n1 / 10; /*a = �����ڸ� ��*/
			b = n1 % 10; /*b = �����ڸ� ��*/
			n1 = b * 10 + (a + b) % 10;
			time++;
		}
	} while (n1 != n);
	printf("%d\n", time);
}