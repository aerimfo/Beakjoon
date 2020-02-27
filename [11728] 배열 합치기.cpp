// [11728] �迭 ��ġ��
// https://www.acmicpc.net/problem/11728
// ��������

#include <cstdio>
#define MAX 10000010
using namespace std;

void sort(int start, int end);
void merge(int start, int end);
int n, m; // �迭 A�� ũ��, �迭 B�� ũ��
int arr[MAX], answer[MAX];

int main(void)
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n; i < n + m; i++) {
		scanf("%d", &arr[i]);
	}
	sort(0, n + m - 1);

	for (int i = 0; i < n + m; i++) {
		printf("%d ", answer[i]);
	}
}

void sort(int start, int end)
{
	if (start == end) {
		return;
	}
	int mid = (start + end) / 2;
	sort(start, mid);
	sort(mid + 1, end);
	merge(start, end);
}

void merge(int start, int end)
{
	int mid = (start + end) / 2;
	int i = start, j = mid + 1, k = 0;
	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j])
			answer[k++] = arr[i++];
		else
			answer[k++] = arr[j++];
	}
	while (i <= mid)
		answer[k++] = arr[i++];
	while (j <= end)
		answer[k++] = arr[j++];
	for (int i = start; i <= end; i++) {
		arr[i] = answer[i - start];
	}
}