// [1085] ���簢������ Ż��
// https://www.acmicpc.net/problem/1085

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> distance; //distance(4) ��� �ϸ� �ȵ�(0, 0, 0, 0, x, y, w-x, h-y ���� �Ǳ� ����) 
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	distance.push_back(x);
	distance.push_back(y);
	distance.push_back(w - x);
	distance.push_back(h - y);
	sort(distance.begin(), distance.end());
	cout << distance[0];
}