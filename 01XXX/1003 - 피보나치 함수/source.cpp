#include <stdio.h>

int zero[41] = {0};
int one[41] = {0};

int main(){
	zero[0] = 1;
	zero[1] = 0;
	one[0] = 0;
	one[1] = 1;
	for(int i=2; i<=40; i++){
		zero[i] = zero[i-1] + zero[i-2];
		one[i]  = one[i-1]  + one[i-2];
	}
	int n,t;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &n);
		printf("%d %d\n", zero[n], one[n]);
	}
	return 0;
}
