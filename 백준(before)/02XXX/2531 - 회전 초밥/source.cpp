#include <bits/stdc++.h>
using namespace std;

int N,D,K,C;
int sushi[34567] = {0};
int ans = -1;

map<int,int> curr;

int idx(int k){
	return (k+N)%N;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> D >> K >> C;
	for(int i=0; i<N; i++){
		cin >> sushi[i];
	}
	
	for(int i=0; i<K; i++){
		curr[sushi[i]]++;
	}
	ans = max(ans, (int)curr.size());
	curr[C]++;
	
	for(int i=K; i<N+K; i++){
		curr[sushi[idx(i)]]++;
		curr[sushi[idx(i-K)]]--;
		if(curr[sushi[idx(i-K)]] == 0){
			curr.erase(sushi[idx(i-K)]);
		}
		ans = max(ans, (int)curr.size());
	}
	cout << ans;
	return 0;
}
