#include <stdio.h>

int f(int k){
	int sum=k;
	while(k){
		sum+=(k%10);
		k/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		if(n==f(i)){
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
