#include <stdio.h>

int main(){
	int h,k;
	char c;
	scanf("%d %d %c", &h, &k, &c);
	for(int i=0; i<h; i++){
		if(c == 'L'){
			for(int j=0; j<i; j++)printf(" ");
		}
		else if(c == 'R'){
			for(int j=1; j<h-i; j++)printf(" ");
		}
		for(int j=0; j<k; j++)printf("*");
		printf("\n");
	}
	return 0;
}
