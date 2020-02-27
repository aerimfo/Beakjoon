// [11399] ATM
// https://www.acmicpc.net/problem/11399
// �׸��� �˰���
// ���� ū ���ڴ� �ִ��� ���� �������� �� -> �������� ����

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n; // ����� ��
	int time = 0, sum = 0;
	scanf("%d", &n);
	vector<int> p(n); // �� ����� ���� �����ϴµ� �ɸ��� �ð�
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	sort(p.begin(), p.end()); // �������� ����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			time += p[j];
		}
		sum += time;
		time = 0;
	}
	printf("%d\n", sum);
}