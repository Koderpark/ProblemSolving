#include <stdio.h>

int check[1000001] = {0};

int main(){
	check[0] = check[1] = 1;
	for(int i=2; i<1000001; i++){
		if(check[i] != 1){
			for(int j=i+i; j<1000001; j+=i){
				if(check[j] != 1) check[j] = 1;
			}
		}
	}
	
	int n,k;
	scanf("%d %d", &n, &k);
	
	for(int i=n; i<=k; i++){
		if(check[i] == 0) printf("%d\n", i);
	}
}
