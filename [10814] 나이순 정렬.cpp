//[10814] ���̼� ����
//https://www.acmicpc.net/problem/10814

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, age;
	char name[101];
	vector<string> v[201];
	cin >> n;
	for (int i = 0; i < n; i++) //���̿� �ش��ϴ� index�� �̸� ����
	{
		cin >> age;
		cin >> name;
		v[age].push_back(name);
	}
	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < v[i].size(); j++) {
			cout << i << " ";
			cout << v[i][j] << '\n'; //endl�� ����ϴ� ��� �ð� �ʰ�
		}
	}
	return 0;
}