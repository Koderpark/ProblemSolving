#include <stdio.h>

int count(int n){
	if(n == 0) return 1;
	if(n <  0) return 0;
	return count(n-1) + count(n-2) + count(n-3);
}

int main(){
	int time, n;
	scanf("%d", &time);
	for(int i=0; i<time; i++){
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
	return 0;
}
