/*[1065] �Ѽ�*/

#include <stdio.h>
int main(void)
{
	int n, count = 0; /*�ڿ��� n, �Ѽ��� ����*/
	int a = 0, b = 0, c = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i <= 99)
			count++;
		else
		{
			a = i / 100; /*���� �ڸ�*/
			b = (i - a * 100) / 10; /*���� �ڸ�*/
			c = i - a * 100 - b * 10; /*���� �ڸ�*/
			if ((b - a) == (c - b))
				count++;
		}
	}
	printf("%d\n", count);
}