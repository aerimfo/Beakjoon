/*[1100] �Ͼ� ĭ*/
/*https://www.acmicpc.net/problem/1100*/

#include <stdio.h>
int main()
{
	char state[8][8];
	int count = 0;
	for (int i = 0; i < 8; i++) /*��*/
		gets(state[i]);
	for (int i = 0; i < 8; i++)
	{
		for (int j = i % 2; j < 8; j += 2) /*�� ���� �� ĭ*/
		{
			if (state[i][j] == 'F')
				count++;
		}
	}
	printf("%d\n", count);
}