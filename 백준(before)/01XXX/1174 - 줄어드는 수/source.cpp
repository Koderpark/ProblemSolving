#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool chk(int k){
	int now = k%10;
	while(k/10){
		k/=10;
		if(k%10 <= now) return false;
		else{
			now = k%10;
		}
	}
	return true;
}

vector<ll> v;

int arr[] = {9,8,7,6,5,4,3,2,1,0};

int main(){
	for(int i=1; i<(1<<10); i++){
		int tmp = i;
		ll val = 0;
		int idx = 0;
		
		while(tmp){
			if(tmp%2 == 1) val = val*10 + arr[idx];
			tmp /= 2;
			idx++;
		}
		v.push_back(val);
	}
	
	sort(v.begin(), v.end());
	
	int N;
	cin >> N;
	if(v.size() < N) cout << -1;
	else cout << v[N-1];
	return 0;
}
