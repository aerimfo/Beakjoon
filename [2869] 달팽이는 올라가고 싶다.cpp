#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
	long a, b, v; /*���� �ö�, �㿡 ������, ���� ������ ����*/
	long now = 0; /*���� �������� ��ġ*/
	int day;
	scanf("%d %d %d", &a, &b, &v);
	day = (v - b - 1) / (a - b) + 1;
	printf("%d", day);
}