// [1475] �� ��ȣ
// https://www.acmicpc.net/problem/1475

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(void)
{
	string n; // �ټ����� �� ��ȣ
	int exist[10] = { 0 }; // ���ȣ �� �� ������ ����
	int set = 0; // �ʿ��� ��Ʈ�� ����
	cin >> n;
	
	for (int i = 0; i < n.size(); i++) {
		exist[n[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		if (i == 6) // ���ڰ� 6�� ���
			continue; 
		if (i == 9) { // ���ڰ� 9�� ���
			for (int j = 0;; j += 2) {
				if (exist[6] + exist[9] <= j) {
					if (set >= j / 2) 
						;

					// �ʿ��� ��Ʈ�� ���� ��Ʈ�� ������ �ʰ��� ���
					else 
						set += j / 2 - set; // **���̸�ŭ�� ��������Ѵ�**
					break;
				}
			}
			break;
		}
		// ���ڰ� �ѹ��� ������ ���� ���
		if (exist[i] == 0)
			;
		// ���ڰ� �� �� �̻� ���� ���
		else {
			if (exist[i] > set)
				set += exist[i] - set;
			else
				;
		}
	}
	cout << set << endl;
}