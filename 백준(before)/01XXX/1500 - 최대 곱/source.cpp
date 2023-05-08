#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	ull S,K;
	cin >> S >> K;
	
	ull tmp = S-(S/K)*K;
	ull ans = 1;
	
	for(int i=0; i<K; i++){
		if(i<tmp) ans *= (S/K + 1);
		else      ans *= (S/K);
	}
	
	cout << ans;
	return 0;
}
