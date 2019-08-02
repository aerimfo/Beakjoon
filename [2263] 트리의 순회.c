/*[2263] Ʈ���� ��ȸ*/
/*���� ��ȸ : ��� �湮->���� ���� Ʈ�� ���� ��ȸ->������ ���� Ʈ�� ���� ��ȸ*/
/*���� ��ȸ : ���� ���� Ʈ�� ���� ��ȸ->��� �湮->������ ���� Ʈ�� ���� ��ȸ*/
/*���� ��ȸ : ���� ���� Ʈ�� �Ŀ� ��ȸ->������ ���� Ʈ�� ���� ��ȸ->��� �湮*/
/*https://www.acmicpc.net/problem/2263 */
#include <stdio.h>
#define MAX 100000

int in[MAX];
int post[MAX];
void BinaryTree(int in_s, int in_f, int post_s, int post_f);

int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) /*�ο���*/
		scanf_s("%d", &in[i]);
	for (int i = 0; i < n; i++) /*����Ʈ����*/
		scanf_s("%d", &post[i]);
	BinaryTree(0, n - 1, 0, n - 1);
	return 0;
}

void BinaryTree(int in_s, int in_f, int post_s, int post_f)
{
	if (post_s <= post_f)
	{
		int head = post[post_f];
		int item_l = 0, item_r = 0;
		int i = 0;
		printf("%d ", head);
		for (i = in_s; in[i] != head; i++)
			;
		item_l = i - in_s;
		item_r = in_f - i;
		BinaryTree(in_s, in_s + item_l - 1, post_s, post_s + item_l - 1);
		BinaryTree(in_f - item_r + 1, in_f, post_f - item_r, post_f - 1);
	}
}
