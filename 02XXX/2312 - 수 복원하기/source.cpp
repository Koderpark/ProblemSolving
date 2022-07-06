#include <bits/stdc++.h>
using namespace std;

int chk[123456] = {0};

int main(){
	int n,a;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		memset(chk, 0, sizeof(chk));
		scanf("%d", &a);
		
		while(a!=1){
			for(int i=2; i<=a; i++){
				if(a%i == 0){
					chk[i]++;
					a/=i;
					break;
				}
			}
		}
		
		for(int i=0; i<123456; i++){
			if(chk[i] != 0){ printf("%d %d\n", i, chk[i]); }
		}
	}
	return 0;
}
