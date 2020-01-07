#include <stdio.h>

int k,n;
int people(int x, int y){
	if(x == 0) return y;
	int sum=0;
	for(int i=1; i<=y; i++) sum+=people(x-1,i);
	return sum;
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++){
		scanf("%d %d", &k, &n);
		printf("%d\n", people(k,n));
	}
	return 0;
}
