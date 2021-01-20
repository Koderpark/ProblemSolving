#include <stdio.h>
int time;
int sum;
long long int n = 1;

long long int f(){
	if(sum == 0) return 1;
	if(sum == 1 || sum == -1) return time % 2 && sum == -1 ? -1 : 1; 
	n *= sum;
	if(time-- == 1) return n;
	return f();
}

int main(){
	scanf("%d %d", &sum, &time);
	printf("%lld", f());
}
