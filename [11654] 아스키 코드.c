/* �ƽ�Ű �ڵ� */
#include <stdio.h>
int main(void)
{
	char n;
	scanf("%c", &n); /*n�� ���ڷ� ����*/

	if ('0' <= n <= '9') /*n�� ������ ���*/
		printf("%d", n);
	else if ('A' <= n <= 'Z') /*n�� �빮���� ���*/
		printf("%d", 65 + n);
	else if ('a' <= n <= 'z') /*n�� �ҹ����� ���*/
		printf("%d", n + 97);
}