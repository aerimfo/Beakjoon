//[3053] �ý� ������
// https://www.acmicpc.net/problem/3053
// �ý� ������ -> ���� ������ ��� -> ���� ���� = 2*r*r

#include <iostream>
#include <cstdio>
using namespace std;

#define M_PI 3.14159265358979323846

int main(void)
{
	double r; //r�� 100000���� ���ų� ���� �ڿ���

	cin >> r;

	printf("%.6f\n", M_PI*r*r);
	printf("%.6f\n", 2 * r*r);
}