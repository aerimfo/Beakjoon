// [1541] �Ҿ���� ��ȣ
// https://www.acmicpc.net/problem/1541
// �׸��� �˰���

#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	string tmp, expr;
	int answer = 0;
	bool minus = false;
	cin >> expr; // �� �Է�
	for (int i = 0; i <= expr.length(); i++) {
		// �������� ���
		if ((expr[i] == '-') || (expr[i] == '+') || (expr[i] == '\0')) {
			if (minus == true)
				answer -= stoi(tmp);
			else
				answer += stoi(tmp);
			tmp = "";
		}
		if (expr[i] == '-') {
			minus = true;
			continue;
		}
		// �����ڰ� �ƴ� ���(������ ���)
		cout << "tmp = " << tmp << endl;
	}
	printf("%d\n", answer);
}