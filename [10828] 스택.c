/*https://www.acmicpc.net/problem/10828 */

/*����*/
#include <stdio.h>
#include <string.h> /*strcmp()*/

#define STACK_SIZE 10000 /*��100���� �ߴ��� ��Ÿ�� ����..��*/

int main(void)
{
	int stack[STACK_SIZE]; /*���� ����*/
	int topn = -1;
	int n; /*����� ��*/
	char input[10];
	int item; /*���ÿ� ���� ����*/
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", input);
		if (!strcmp(input, "push"))
			scanf("%d", &stack[++topn]);
		else if (!strcmp(input, "pop"))
		{
			if (topn < 0) /*������ �������*/
				printf("-1\n");
			else
				printf("%d\n", stack[topn--]); /*������ ���� ���� �ִ� ���� ��� �� ����*/
		}
		else if (!strcmp(input, "size"))
			printf("%d\n", topn + 1);
		else if (!strcmp(input, "empty"))
		{
			if (topn < 0) /*������ ������� ���*/
				printf("1\n");
			else /*������ ������� ���� ���*/
				printf("0\n");
		}
		else if (!strcmp(input, "top"))
		{
			if (topn < 0)
				printf("-1\n");
			else
				printf("%d\n", stack[topn]); /*������ ���� ���� �ִ� ���� ���*/
		}
	}
}