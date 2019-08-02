/*[2751] �� �����ϱ�2*/
/*https://www.acmicpc.net/problem/2751*/
#include <stdio.h>
#define MAX 1000000
void mergesort(int num[], int left, int right);
void merge(int num[], int left, int mid, int right);
int n;
int num[MAX];

int main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	mergesort(num, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d\n", num[i]);
}

void mergesort(int num[], int left, int right)
{
	int mid;
	if (right > left) /*left==right, �� ���Ұ� 1���̸� ����*/
	{
		mid = (left + right) / 2; /*����(divide)*/
		mergesort(num, left, mid); /*�պκ� ����Ʈ ����(conquer)*/
		mergesort(num, mid + 1, right); /*�޺κ� ����Ʈ ����(conquer)*/
		merge(num, left, mid + 1, right); /*���ĵ� 2���� �κ� �迭 ����(combine)*/
	}
}

void merge(int num[], int left, int mid, int right) /*�� �߿� ���� ���� ���ؼ� temp�� ����*/
{
	int left_end, num_elements, tmp_pos;
	int temp[MAX];
	left_end = mid - 1; /*���� segment�� ���� ������ index*/
	tmp_pos = left;
	num_elements = right - left + 1; /*������ ����*/
	while ((left <= left_end) && mid <= right)
	{
		if (num[left] <= num[mid])
		{
			temp[tmp_pos] = num[left];
			tmp_pos = tmp_pos + 1;
			left = left + 1;
		}
		else
		{
			temp[tmp_pos] = num[mid];
			tmp_pos = tmp_pos + 1;
			mid = mid + 1;
		}
	}
	while (left <= left_end) /*ù ��° segment�� �����ִ� �׸��� �߰�*/
	{
		temp[tmp_pos] = num[left];
		left += 1;
		tmp_pos += 1;
	}
	while (mid <= right)
	{
		temp[tmp_pos] = num[mid];
		mid += 1;
		tmp_pos += 1;
	}
	for (int i = 0; i < num_elements; i++) /*�ӽ� �迭 temp�� ���� ���� �迭 num�� ����*/
	{
		num[right] = temp[right];
		right -= 1;
	}
}