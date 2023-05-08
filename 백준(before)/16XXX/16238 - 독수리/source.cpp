#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int ans = 0;

priority_queue<int> pq;

int main(){
	int n,k;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> k;
		pq.push(k);
	}
	
	while(!pq.empty()){
		if(cnt >= pq.top()) break;
		
		ans -= cnt;
		cnt++;
		ans += pq.top(); pq.pop();
	}
	
	cout << ans;
	return 0;
}
