#include <bits/stdc++.h>
using namespace std;

int count(int k){
	int ans = 0;
	while(k){
		ans += k%2;
		k/=2;
	}
	return ans;
}

int main(){
	int N,K;
	cin >> N >> K;
	
	int ans = 0;
	while(count(N+ans) > K){
		ans++;
	}
	cout << ans;
	return 0;
}
