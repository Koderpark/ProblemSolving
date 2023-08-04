#include <bits/stdc++.h>
using namespace std;

int chk[5000001] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(chk, -1, sizeof(chk));
	chk[0] = 0;
	chk[1] = 1;
	for(int i=2; i<=5000000; i++){
		if(chk[i] != -1) continue;
		chk[i] = i;
		for(int j=i+i; j<=5000000; j+=i) if(chk[j] == -1) chk[j] = i;
	}
	
	int T,N;
	cin >> T;
	while(T--){
		cin >> N;
		while(N > 1){
			cout << chk[N] << " ";
			N /= chk[N];
		}
		cout << "\n";
	}
	return 0;
}
