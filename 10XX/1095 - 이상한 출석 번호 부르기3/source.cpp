#include<stdio.h>

int main(){
	int n;
	int less = 20000000;
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
