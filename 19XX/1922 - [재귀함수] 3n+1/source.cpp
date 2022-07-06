#include <stdio.h>

int sum=0;

int f(int a){
	sum++;
	if(a==1) return sum;
	if(a%2) return f(3*a+1);
	else return f(a/2); 
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
