#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
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
		/*upper_bound(�迭�� ����, �迭�� ��, ã�� ���� ��)*/
		cout << upper_bound(sang.begin(), sang.end(), num) - lower_bound(sang.begin(), sang.end(), num) << " ";
	}
}