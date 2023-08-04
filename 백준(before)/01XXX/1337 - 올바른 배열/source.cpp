#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		v.push_back(k);
	}
	
	int ans = 1;
	
	sort(v.begin(), v.end());
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			int val = v[j]-v[i];
			int cnt = j-i+1;
			
			if(val <= 4){
				ans = max(ans, cnt);
			}
		}
	}
	
	cout << 5-ans;
	return 0;
}
