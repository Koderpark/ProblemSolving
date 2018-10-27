#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	char array[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d", &array[i]);
	}
	for(int i=n - 1 ; i>=0 ; i--){
		printf("%d", array[i]);
	}
}
