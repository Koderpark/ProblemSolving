#include <stdio.h>

int f(int k, int t){
	if(t == 1) return k;
	k = k*t;
	while(k%10 == 0) k/=10;
	k = k%100000;
	return f(k, t-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(1, n)%10);
}
