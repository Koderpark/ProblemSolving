#include <stdio.h>

long long int memo[51][51] = {0};

long long int f(long long int x, long long int y){
	if(x == 1 || y == 1) return 1;
	if(memo[x][y] == 0) memo[y][x] = memo[x][y] = (f(x-1,y) + f(x,y-1))%100000000;
	return memo[x][y];
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%lld", f(a,b));
	return 0;
}
