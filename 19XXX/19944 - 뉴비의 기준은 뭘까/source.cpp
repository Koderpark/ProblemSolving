#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	
	if(m == 1 || m == 2) puts("NEWBIE!");
	else if (m <= n) puts("OLDBIE!");
	else puts("TLE!");
	return 0;
}
