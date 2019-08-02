/*https://www.acmicpc.net/problem/11729 */

/*�ϳ��� ž �̵�����*/
#include <stdio.h>
#include <math.h> /*pow()*/
void htower(int n, int a, int b);

int main(void)
{
	int n, count; /*����� ����, �̵� Ƚ��*/
	scanf("%d", &n);
	count = pow(2, n) - 1;
	printf("%d\n", count);
	htower(n, 1, 3); /*n���� ������ 1->3�� �̵�*/
}

void htower(int n, int a, int b)
{
	int c;

	if (n == 1) /*1���� ���� ���� ���*/
		printf("%d %d\n", a, b);
	else
	{
		c = 6 - a - b;
		htower(n - 1, a, c); /*(n-1)���� a->c �̵�*/
		printf("%d %d\n", a, b);
		htower(n - 1, c, b); /*(n-1)���� c->b �̵�*/
	}
}