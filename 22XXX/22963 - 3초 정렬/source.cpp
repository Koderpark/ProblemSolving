#include <bits/stdc++.h>
#define INF 998244353
using namespace std;

vector<int> lis;
vector<int> v;
pair<int,int> back[234567];

int ans[234567] = {-1};


int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	lis.push_back(-INF);
	
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		v.push_back(k); 
	}
	
	for(int i=0; i<N; i++){
		if(lis.back() <= v[i]){
			lis.push_back(v[i]);
			back[i] = {v[i], lis.size()-1};
		}else{
			auto it = upper_bound(lis.begin(), lis.end(), v[i]);
			*it = v[i];
			back[i] = {v[i], distance(lis.begin(), it)};
		}
	}
	
	int ptr = lis.size()-1;
	for(int i=N-1; i>=0; i--){
		if(back[i].second == ptr){
			ans[ptr] = back[i].first;
			ptr--;
		}
	}
	
	if(N-lis.size()+1 <= 3) cout << "YES\n";
	else{
		cout << "NO\n";
		return 0;
	}
	v.push_back(1e9);
	cout << N-lis.size()+1 << "\n";
	
	ptr = lis.size()-1;
	for(int i=N-1; i>=0; i--){
		if(v[i] != ans[ptr]){
			cout << i+1 << " " << v[i+1] << "\n";
			v[i] = v[i+1];
		}else{
			ptr--;
		}
	}
	return 0;
}
