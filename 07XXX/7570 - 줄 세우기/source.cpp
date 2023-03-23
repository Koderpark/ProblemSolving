#include <bits/stdc++.h>
using namespace std;

vector<int> v(1234567);

int main(){
	int N,k;
	int maxv = 0;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> k;
		v[k] = v[k-1]+1;
		maxv = max(maxv, v[k]);
	}
	
	cout << N-maxv;
	return 0;
}
