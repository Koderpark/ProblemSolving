#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int n,k;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> k;
		v.push_back(-k);
	}
	sort(v.begin(), v.end());
	
	int day = -1;
	
	for(int i=0; i<n; i++){
		day = max(day, i+1-v[i]);
	}
	cout << day+1;
}
