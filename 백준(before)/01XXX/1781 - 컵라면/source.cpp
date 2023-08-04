#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

priority_queue<pair<int,int>> pq;

int main(){
	int n;
	int a,b;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a >> b;
		pq.push({b,a});
	}
	
	int time = 1;
	ll ans = 0;
	while(!pq.empty()){
		auto tmp = pq.top();
		pq.pop();
		
		if(time < tmp.second){
			time++;
			ans += tmp.first;
		}
	}
	
	printf("%lld", ans);
	return 0;
}
