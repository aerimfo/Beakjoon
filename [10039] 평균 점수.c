/* ��� ���� */
#include <stdio.h>
int main(void)
{
	int sum = 0;
	int score[5], n = 0;;

	for (int i = 0; i < 5; i++)
		scanf("%d", &score[i]); /*scanf()�� ���� �Է¹ް� �迭�� �����ϴ� �ͱ��� �ѹ��� ����*/

	for (int i = 0; i < 5; i++)
	{
		if (40 <= score[i])
			sum += score[i];
		else
			sum += 40;
	}
	printf("%d", sum / 5);
}