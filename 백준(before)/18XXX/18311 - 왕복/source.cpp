#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[123456] = {0};
vector<pair<ll,int>> course;



int main(){
	course.push_back({0,1});
	ll N,K;
	cin >> N >> K;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
		if(i==1){
			course.push_back({arr[i],i+1});
		}
		else if(i==N){
			ll prev = course.back().first;
			course.push_back({arr[i]+prev, i});
		}
		else{
			ll prev = course.back().first;
			course.push_back({arr[i]+prev,i+1});
		}
	}
	
	for(int i=N; i>=1; i--){
		ll prev = course.back().first;
		course.push_back({arr[i]+prev,i-1});
	}
	
	int ans = 0;
	for(auto p : course){
		//printf("[%d %d]", p.first, p.second);
		if(p.first <= K) ans = p.second;
	}
	cout << ans;
	return 0;
}
