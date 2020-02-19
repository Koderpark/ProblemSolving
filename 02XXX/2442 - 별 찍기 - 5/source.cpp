#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++,puts("")){
		for(int j=n-1; j>=0; j--){
			if(i==j || i>j) printf("*");
			else printf(" ");
		}
		for(int j=0; j<i; j++){
			printf("*");
		}
	}
	return 0;
}
