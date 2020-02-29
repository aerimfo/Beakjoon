// [1193] �м�ã��
// https://www.acmicpc.net/problem/1193

#include <iostream>
using namespace std;

int main(void)
{
	int x, denominator, numerator;
	cin >> x;
	for (int i = 1;; i++) {
		if ((1 + i*(i - 1) / 2 <= x) && (x < 1 + i*(i + 1) / 2)) {
			// ¦�� ��
			if (i % 2 == 0) {
				numerator = 1 + x - (1 + i * (i - 1) / 2); // ����
				denominator = 1 + i * (i + 1) / 2 - x; // �и�
			}
			// Ȧ�� ��
			else {
				numerator = 1 + i * (i + 1) / 2 - x;
				denominator = 1 + x - (1 + i * (i - 1) / 2);
			}
			break;
		}
	}
	cout << numerator << "/" << denominator << endl;
}