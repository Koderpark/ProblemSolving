#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int A,B,C;
		int ans = 0;
		
		cin >> A >> B >> C;
		
		for(int i=1; i<=A; i++){
			for(int j=1; j<=B; j++){
				for(int k=1; k<=C; k++){
					if(i%j == j%k && j%k == k%i) ans++;
				}
			}
		}	
		
		cout << ans << "\n";
	}
	return 0;
}
