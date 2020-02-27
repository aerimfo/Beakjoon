// [1931] ȸ�ǽǹ���
// https://www.acmicpc.net/problem/1931
// �׸��� �˰���

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, cnt = 1; // ȸ���� ��, ����� �� �ִ� ȸ�� ��
	vector<pair<int, int> > meet; // ȸ���� ����
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int start, end; // ȸ�� ���� �ð�, ������ �ð�
		scanf("%d %d", &start, &end);
		meet.push_back(make_pair(start, end));
	}

	sort(meet.begin(), meet.end()); // ȸ�� ���� �ð� �������� �������� ����
	/*vector<pair<int, int>> v ���� ��� sort�� ����Ʈ�� first ���� �������� ����*/

	int tmp = meet[n-1].first;
	for (int i = n - 2; i >= 0; i--) { // ���� �ð��� ���� ���� �ͺ��� Ž��
		if (tmp >= meet[i].second) { // ���� ȸ�� ���� �ð� >= ���� ȸ�� ���� �ð�
			cnt++;
			tmp = meet[i].first;
		}
	}
	printf("%d\n", cnt);
}