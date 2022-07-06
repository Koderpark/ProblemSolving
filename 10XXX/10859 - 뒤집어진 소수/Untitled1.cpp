#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll N;
	cin >> N;
	
	bool chk1 = true;
	bool chk2 = true;
	
	if(N==1) chk1=false;
	for(ll i=2; i*i<=N; i++){ if(N%i == 0) chk1 = false; }
	
	ll K=0;
	while(N){
		int tmp=0;
		if(N%10 == 3 || N%10 == 4 || N%10 == 7){ chk2=false; }
		else if(N%10 == 6) tmp = 9;
		else if(N%10 == 9) tmp = 6;
		else tmp = N%10; 
		
		K*=10;
		K+=tmp;
		N/=10;
	}
	//cout << K;
	
	if(K==1) chk2 = false;
	for(ll i=2; i*i<=K; i++){ if(K%i == 0) chk2 = false; }
	
	
	if(chk1 && chk2) cout << "yes";
	else cout << "no";
	return 0;
}
