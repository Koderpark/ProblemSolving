#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int stdu[25] = {0};
string arr[345678];

int main(){
	int N,K;
	cin >> N >> K;
	
	for(int i=1; i<=N; i++){
		cin >> arr[i];
	}
	
	int l,r;
	ll ans = 0;
	
	for(int i=1; i<1+K; i++){
		stdu[arr[i].length()]++;
	}
	
	for(int i=1; i<=N; i++){
		l = max(0,i-K-1);
		r = min(N+1,i+K);
		
		stdu[arr[r].length()]++;
		stdu[arr[l].length()]--;
		
		//printf("[%s %d]", arr[i].c_str(), stdu[arr[i].length()]);
		
		ans += stdu[arr[i].length()]-1;
	}
	
	cout << ans/2;
	return 0;
}
