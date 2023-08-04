#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int N,M,K;
	int a;
	int ans = 0;
	
	cin >> N >> M >> K;
	
	int s=1, e=M;
	
	while(K--){
		cin >> a;
		if(a < s){ ans += s-a; s = a; e = s+M-1; }
		if(a > e){ ans += a-e; e = a; s = e-M+1; }
	}
	
	cout << ans;
	return 0;
}
