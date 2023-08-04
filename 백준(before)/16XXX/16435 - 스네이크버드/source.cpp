#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int N,M,k;
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<N; i++){
		if(M >= v[i]){
			M++;
		}
	}
	
	cout << M;
	return 0;
}
