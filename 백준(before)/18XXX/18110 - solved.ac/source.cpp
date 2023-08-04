#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int n,k;
	cin >> n;
	
	int cnt = (double)n*15/100 + 0.5;
	int avg = 0;
	
	if(n==0){ cout << 0; return 0; }
	
	for(int i=0; i<n; i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.end());
	for(int i=cnt; i<n-cnt; i++){ avg += v[i]; }
	
	cout << (int)((double)avg / (n-cnt*2) + 0.5);
	return 0;
}
