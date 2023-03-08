#include <bits/stdc++.h>
using namespace std;

bool isin(string A, string B){
	for(int i=0; i<B.length()-A.length(); i++){
		bool flag = true;
		for(int j=0; j<A.length(); j++){
			if(B[i+j] != A[j]) flag = false;
		}
		if(flag) return true;
	}
	return false;
}

int main(){
	string a;
	string b[123];
	int N;
	int ans = 0;
	
	cin >> a >> N;
	for(int i=0; i<N; i++){
		cin >> b[i];
		b[i] += b[i];
		if(isin(a,b[i])) ans++;
	}
	
	cout << ans;
	return 0;
}
