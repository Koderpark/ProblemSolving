#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int max(int a, int b){ return a>b?a:b; }

string a, b;
int dp[1001][1001];

int f(int p1, int p2) {
    if(p1==a.length() || p2==b.length()) return 0;
    if(a[p1] == b[p2])                   return f(p1+1, p2+1) + 1;
    if(dp[p1][p2] != -1)                 return dp[p1][p2];
    
    return dp[p1][p2] = max(f(p1+1, p2), f(p1, p2+1));
}
int main() {
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));

    cout << f(0,0);
    return 0;
}

