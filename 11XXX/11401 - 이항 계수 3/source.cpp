#include <stdio.h>

#define div 1000000007

int n,k;

int fact(int a){
	if(a == 0) return 1;
	if(a == 1) return 1;
	return a*fact(a-1) % div; 
}

int main(){
	scanf("%d %d", &n, &k);
	printf("%d", (fact(n)%div)/((fact(n-k)%div)*(fact(k)%div))%div);
}
