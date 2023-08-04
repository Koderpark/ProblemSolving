#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;
int cnt[567] = {0};

ll fact(ll k){
	ll ans = 1;
	for(int i=1; i<=k; i++) ans *= i;
	return ans;
}

int main(){
	int N,K,k;
	ll ans = 0;
	ll mul = 1;
	
	cin >> N >> K;
	for(int i=0; i<N; i++){
		cin >> k;
		v.push_back(k);
		cnt[k]++;
	}
	
	sort(v.begin(), v.end());
	for(int i=1; i<=50; i++){
		mul *= fact(cnt[i]);
	}
	
	do{
		int weight = 500;
		bool flag = true;
		for(int i=0; i<N; i++){
			weight -= K;
			weight += v[i];
			if(weight < 500) flag = false;
		}
		if(flag) ans++;
	}while(next_permutation(v.begin(), v.end()));
	
	cout << ans * mul;
	return 0;
}
