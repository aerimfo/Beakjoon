/*[5430] AC*/
/*https://www.acmicpc.net/problem/5430 */
/*deque = stack + queue*/
/*visual studio������ ���� �ȵ�*/
#include <iostream> 
#include <deque> 
#include <string> 
#include <cstdio>

using namespace std;

int main()
{
	bool chk; 	// true�̸� �տ��� false�̸� �ڿ��� 
	bool ok; 		// ������� �� D ȣ���ϸ� error
	int T, n;
	cin >> T; /*the number of test cases*/
	while (T--)
	{
		string cmd = "";
		string input_arr = ""; /*input format : [1, 2] -> string*/
		deque<int> dq;
		ok = true;
		chk = true;

		cin >> cmd; /*functions to perform*/
		cin >> n; /*the number of numbers in the array*/
		cin >> input_arr; /*the number contained in the array*/
		string num = "";	 	// dq�� ���� ��
		for (int i = 0; i < input_arr.length(); i++) 
		{  // deque�� ����� 
			if (input_arr[i] == ',' || input_arr[i] == ']') 
			{
				if (input_arr[i - 1] == '[') 		
					break; 
				dq.push_back(atoi(num.c_str()));
				num = "";
			}
			else if (input_arr[i] != '[' && input_arr[i] != ']')  
				num += input_arr[i]; 
		}
		for (int i = 0; i < cmd.length(); i++)
		{
			if (cmd[i] == 'R') /*function R*/
				chk = !chk;
			else /*function D*/
			{
				if (dq.empty())
				{
					ok = !ok;
					break;
				}
				else
				{
					if (chk)
						dq.pop_front();
					else
						dq.pop_back();
				}
			}
		}
		/*1. ok�� false, true
		  2. error������*/
		
		if (ok) 
		{
			int size = dq.size();
			cout << "[";
			for (int i = 0; i < size; i++) 
			{
				if (chk) 
				{ 
					cout << dq.front(); 
					dq.pop_front(); 
				}
				else 
				{ 
					cout << dq.back(); 
					dq.pop_back(); 
				}
				if (!dq.empty()) /*������ ���� ���*/
					cout << ",";
			}
			cout << "]" << endl; /*������ ���� ���*/
		}
		else 
			cout << "error" << endl;
	}
}