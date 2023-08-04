#include <bits/stdc++.h>
using namespace std;

int N,M;
int mv = 998244353;
int price[12] = {0};

int main(){
	string ans = "";
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> price[i];
		mv = min(mv, price[i]);
	}
	cin >> M;
	
	while(M >= mv){
		printf("[%d]", M);
		for(int i=N-1; i>=0; i--){
			if(price[i] <= M){
				M -= price[i];
				ans += i+'0';
				break;
			}
		}
	}
	
	cout << ans;
	return 0;
}
