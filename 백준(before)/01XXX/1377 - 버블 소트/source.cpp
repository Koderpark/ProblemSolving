#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> A;

vector <int> lis;

int main(){
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		A.push_back({k,i});
	}
	
	int ans = -998244353;
	sort(A.begin(), A.end());
	for(int i=0; i<N; i++){
		ans = max(ans, A[i].second-i);
	}
	
	cout << ans+1;
	return 0;
}
