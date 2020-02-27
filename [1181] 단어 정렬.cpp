//[1181] �ܾ� ����
// https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector< pair<int, string> > word(n); // �ܾ��� ����, �ܾ�

	for (int i = 0; i < n; i++)
	{
		cin >> word[i].second;
		word[i].first = word[i].second.length();
	}

	sort(word.begin(), word.end()); // ���̰� ª�� ������ ����

	for (int i = 0; i < n - 1; i++)
	{
		// �ߺ� ����
		if (word[i].second == word[i + 1].second)
			;
		else
			cout << word[i].second << endl;
	}
	cout << word[n - 1].second << endl;
}