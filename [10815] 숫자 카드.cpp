#include <algorithm> /*binary_search(), sort()*/
#include <iostream>
#include <vector>
#include <stdio.h>
#define MAX 500001

using namespace std;

int main(void)
{
	vector<int>sang;
	int n, m; /*����̰� ������ �ִ� ���� ī���� ����*/
	cin >> n;
	for (int i = 0; i < n; i++) /*����̰� ������ �ִ� ī��*/
	{
		int num;
		scanf("%d", &num);
		sang.push_back(num);
	}
	sort(sang.begin(), sang.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		scanf("%d", &num);
		printf("%d ", binary_search(sang.begin(), sang.end(), num));
		/*bool�� �����͸� %d�� ����ϸ�true = 1, false = 0 ���*/
	}
	return 0;
}