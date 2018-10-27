#include<stdio.h>

int main(){
	int n;
	int a;
	int best;
	scanf("%d", &n);
	int array[100];
	for(int i=0 ; i<=n ; i++) {	array[i] = 0;	}
	
	for(int i=0 ; i<n ; i++){
		scanf("%d", &a);
		array[a]++;
		if(best < a) best = a;
		//printf("%d", array[a]);
	}
	for(int i=1 ; i<best ; i++){	printf("%d ", array[i]);	}
	return 0;
}
