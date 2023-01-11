#include <bits/stdc++.h>
using namespace std;

int chk(int k){
	int ret = 0;
	while(k){
		if(k%10 == 0) ret++;
		k/=10;
	}
	return ret;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int N, M;
		cin >> N >> M;
		
		int ans = 0;
		if(N==0) ans++;
		
		for(int i=N; i<=M; i++){
			ans += chk(i);
		}
		cout << ans << '\n';
	}
}
