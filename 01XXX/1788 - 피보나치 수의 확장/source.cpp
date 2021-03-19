#include <bits/stdc++.h>
#define MOD 1000000000
#define MIL 1000000 
using namespace std;

int fibo[2345678] = {0};

int main(){
	fibo[1000000] = 0;
	fibo[1000001] = 1;
	
	for(int i=MIL+2; i<=MIL+MIL; i++){
		fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;
	}
	for(int i=MIL-1; i>=0; i--){
		fibo[i] = (fibo[i+2] - fibo[i+1]) % MOD;
	}
	int n;
	scanf("%d", &n);
	
	if(fibo[n+MIL] == 0) printf("0\n");
	else if(fibo[n+MIL] > 0) printf("1\n");
	else if(fibo[n+MIL] < 0) printf("-1\n");
	
	printf("%d",abs(fibo[n+MIL]));
	return 0;
}
