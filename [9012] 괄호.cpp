/*[9012] ��ȣ*/
/*https://www.acmicpc.net/problem/9012*/
/*VPS = Valid Parenthesis String = �ùٸ� ��ȣ ���ڿ�*/
#include <iostream>
#include <stack>
#include <string>

using namespace std;

string VPS(string str);

int main() 
{
	int T; /*the number of test datas*/
	cin >> T;
	while (T--) 
	{
		string str;
		cin >> str; /*input parenthesis string*/
		cout << VPS(str) << endl; /*output result : YES / NO*/
	}
}

string VPS(string str)
{
	stack<char>s; /*stack ����*/
	int len = str.length(); 
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
			s.push('('); /*1. '('�� ����*/
		else
		{
			if (s.empty()) /*3. �׷��� ���ϴٸ� ���� �ȸ´´ٴ� �Ҹ�*/
				return "NO";
			else
				s.pop(); /*2. ')'�� ������ ���;��ϴµ�*/
		}
	}
	/*If it is not returned in the above for statement and the stack is empty, 
	  it means vps*/
	if (s.empty())
		return "YES";
	else
		return "NO";
}