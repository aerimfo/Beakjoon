// [9252] LCS 2
// https://www.acmicpc.net/problem/9252

#include <iostream>
#include <cstring>
#include <algorithm> // reverse
using namespace std;

int dp[1001][1001];

int max(int a, int b)
{
    if(a > b) return a;
    else return b; 
}

int lcsLength(string s1, string s2)
{
    // 초기화
    for(int i = 0 ; i < s1.size() ; i++) {
        for(int j = 0 ; j < s2.size() ; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 1 ; i < s1.size() ; i++) {
        for(int j = 1 ; j < s2.size() ; j++) {
            if(s1[i] == s2[j]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        } 
    }
    
    return dp[s1.size()-1][s2.size()-1];
}

// 가장 뒤에서부터 탐색 시작
string lcs(string s1, string s2)
{
    string ans = "";
    int i = s1.size()-1, j = s2.size()-1;
    while(i > 0 && j > 0) {
        if(s1[i] == s2[j]) {
            ans.push_back(s1[i]);
            i -= 1, j -= 1;
        }
        else {
            if(dp[i-1][j] > dp[i][j-1]) {
                i -= 1;
            }
            else {
                j -= 1;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;

    // 시작 인덱스를 1로 하기 위해 임의의 문자 삽입
    s1.insert(0, "0"); s2.insert(0, "0");

    cout << lcsLength(s1, s2) << '\n';
    cout << lcs(s1, s2) << '\n';
}
