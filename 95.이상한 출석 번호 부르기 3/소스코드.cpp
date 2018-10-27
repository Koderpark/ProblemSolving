#include<stdio.h>

int main(){
	int n;
	int less;
	int a;
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%d", &a);
		if(a < less){
			less = a;
		}
	}
	printf("%d", less);
} 
