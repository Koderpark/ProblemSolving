#include <bits/stdc++.h>
using namespace std;

vector<int> dir; // 수빈이로부터의 거리. 

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int N,S,k;
	cin >> N >> S;
	for(int i=0; i<N; i++){
		cin >> k;
		dir.push_back(abs(S-k));
	}
	
	if(N == 1){
		cout << dir[0];
		return 0;
	}
	
	int ans = gcd(dir[0], dir[1]);
	for(int i=2; i<N; i++) ans = gcd(ans, dir[i]);
	cout << ans;
	return 0;
}
