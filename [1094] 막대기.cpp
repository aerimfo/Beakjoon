// [1094] �����
// https://www.acmicpc.net/problem/1094

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int x, answer = 1;
	vector<int> stick;
	stick.push_back(64);
	cin >> x;
	while (stick[stick.size() - 1] != 1) {
		int temp = stick[stick.size() - 1] / 2;
		int sum = 0;
		stick.pop_back();
		stick.push_back(temp); stick.push_back(temp); // ���� ª�� ���븦 �������� �ڸ�
		for (int i = 0; i < stick.size(); i++) {
			sum += stick[i];
		}
		// ������ �ڸ� ������ ���� �� �ϳ��� ������ �����ִ� ������ ������ ���� x���� ũ�ų� ���ٸ�
		if (sum - stick[stick.size() - 1] >= x) {
			// �����ִ� ���� ������ ���� ���� ����� �ϴ� ������ ���
			if ((sum - stick[stick.size() - 1]) == x) {
				answer = stick.size() - 1;
				cout << answer;
				return 0;
			}
			stick.pop_back(); // �� ������ �����(������ �ڸ� ���� �� �ϳ�) ����
		}
	}
	cout << answer;

}