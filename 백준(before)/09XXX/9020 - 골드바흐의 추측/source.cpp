#include <stdio.h>

bool prime[10001] = {0};

int main(){
	// 에라토스테네스의 체.
	prime[0] = prime[1] = 1;
	for(int i=2; i<10000; i++) if(prime[i] == 0) for(int j=i+i; j<=10000; j+=i) prime[j] = 1;
	
	int t,n;-
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &n);
		for(int i=n/2; i>=1; i-=1){
			if(i%2 == 0 && i != 2) continue; // 홀수조차 아닌 경우
			if(prime[i]==0 && prime[n-i]==0){ // 둘 모두 소수인 경우. 
				printf("%d %d\n", i, n-i);
				break;
			}
		}
	}
	return 0;
} 
