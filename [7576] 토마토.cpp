#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int> >tomatos;

int box[1001][1001];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, m;
int total = 0;
int solve();

int main()
{
	/*ť���� ���� �丶���� ��ġ�� ������ -> (x, y)��*/
	cin >> n >> m;
	for (int i = 0; i < m; i++) /*m���� ����!!*/
		for (int j = 0; j < n; j++)
		{
			cin >> box[i][j];
			if (box[i][j] == 1) /*���� �丶��*/
				tomatos.push(make_pair(i, j));
			else if (box[i][j] == -1) /*�丶�� �ȵ������*/
				total++;
		}
	cout << solve();
	return 0;
}

int solve()
{
	pair<int, int>now; /*���� ���� �ִ� ��*/
	int size = 0, days = 0;
	int nextx, nexty;
	while (!tomatos.empty())
	{
		size = tomatos.size(); /*���Ӱ� ���� �丶���� ����*/
		total += size;
		if (total == n * m) /*��� �丶�䰡 �;���!*/
			return days;
		for (int i = 0; i < size; i++)
		{
			now = tomatos.front();
			tomatos.pop();
			for (int j = 0; j < 4; j++) /*dx, dy ����ؼ� nextx, nexty��ǥ ���ϱ�*/
			{
				nextx = now.first + dx[j];
				nexty = now.second + dy[j];
				if (nextx >= 0 && nextx < m&&nexty >= 0 && nexty < n && !box[nextx][nexty])
				{
					box[nextx][nexty] = 1;/*�Ͱ� ����*/
					tomatos.push(make_pair(nextx, nexty));
				}
			}
		}
		days++;
	}
	return -1;
}