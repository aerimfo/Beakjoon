/*[11651] ��ǥ �����ϱ�2*/
#include <stdio.h>
#define MAX 100000

typedef struct twodimen
{
	int x;
	int y;
}twod;

void swap(twod arr[], int a, int b);
int partition(twod arr[], int left, int right);
void quicksort(twod arr[], int left, int right);

int main(void)
{
	int n; /*���� ����*/
	twod dot[MAX];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d %d", &dot[i].x, &dot[i].y);
	quicksort(dot, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", dot[i].x, dot[i].y);
}

void swap(twod arr[], int a, int b)
{
	twod temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int partition(twod arr[], int left, int right)
{
	int pivot = left;
	int low = left + 1;
	int high = right;

	while (low <= high) /*�����Ǳ� ������ �ݺ�*/
	{
		while (arr[pivot].y >= arr[low].y) /*pivot���� ū ���� ã�� ����*/
		{
			if (arr[pivot].y == arr[low].y)
			{
				if (arr[pivot].x > arr[low].x)
					low++;
				else
					break; /*���ٽɡ�*/
			}
			else
				low++;
		}
		while (arr[pivot].y <= arr[high].y) /*pivot���� ���� ���� ã�� ����*/
		{
			if (arr[pivot].y == arr[high].y)
			{
				if (arr[pivot].x < arr[high].x)
					high--;
				else
					break; /*���ٽɡ�*/
			}
			else
				high--;
		}
		if (low <= high) /*�������� ���� �����̸� swap*/
			swap(arr, low, high);
	}
	swap(arr, left, high); /*pivot�� high��ȯ*/
	return high;  /*�Ű��� pivot�� ��ġ���� ��ȯ*/

}

void quicksort(twod arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = partition(arr, left, right);
		quicksort(arr, left, pivot - 1); /*��������*/
		quicksort(arr, pivot + 1, right); /*����������*/
	}
}