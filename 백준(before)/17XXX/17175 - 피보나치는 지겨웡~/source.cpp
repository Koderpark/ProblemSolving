#include <bits/stdc++.h>
using namespace std;

int cnt[60] = {0};

int main(){
	cnt[0] = cnt[1] = 1;
	for(int i=2; i<=50; i++){
		cnt[i] = (1+cnt[i-1]+cnt[i-2]) % 1000000007;
	}
	
	int n;
	cin >> n;
	cout << cnt[n];
	return 0;
}
