/*[2163] ���ݸ� �ڸ���*/
/*https://www.acmicpc.net/problem/2163*/
/*���ݸ��� �ᱹ 1x1ũ��� �� �ɰ��ٸ� ����� ���� �Ѱ��� �ۿ� ���µ�
  �� �ּ� �ɰ��� Ƚ���� ���϶�°����� �𸣰���*/
#include <iostream>

using namespace std;

int main(void)
{
	int n, m,  cnt;
	cin >> n >> m;
	cnt = (n - 1) + n * (m - 1);
	cout << cnt;
}