#include <stdio.h>

int check[5001] = {0};

int main(){
	int n,k;
	int sum=0;
	scanf("%d %d", &n ,&k);
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			sum++;
			if(check[sum] == 1) continue;
			if(j == n-i+1) sum=1;
		}
		printf("%d ", sum);
		check[sum] = 1;
	}
	return 0;
}
