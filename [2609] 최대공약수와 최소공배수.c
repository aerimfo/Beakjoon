/*�ִ������� �ּҰ����*/

#include <stdio.h>
int gcd(int a, int b) /*�ִ����� -> ��Ŭ���� ȣ����*/
{
	return (a % b) != 0 ? gcd(b, a%b) : b;
}

int lcm(int a, int b) /*�ּҰ����*/
{
	return a * b / gcd(a, b); /*�ּҰ���� * �ִ����� = a * b*/
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("%d", gcd(a, b));
		printf("\n");
		printf("%d", lcm(a, b));
	}
	else
	{
		printf("%d", gcd(a, b));
		printf("\n");
		printf("%d", lcm(b, a));
	}
}