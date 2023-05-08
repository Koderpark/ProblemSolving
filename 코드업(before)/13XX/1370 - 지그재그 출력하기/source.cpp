#include <stdio.h>

int main(){
	int h,r;
	scanf("%d %d", &h, &r);
	for(int i=0; i<r; i++){
		for(int i=0; i<h; i++){
			for(int j=h-i; j<=h; j++){
				if(j==h)	printf("*");
				else 		printf(" ");
			}
			printf("\n");
		}
		for(int i=1; i<h; i++){
			for(int j=i; j<h; j++){
				if(j==h-1)	printf("*");
				else 		printf(" ");
			}
			printf("\n");
		}
	}
}
