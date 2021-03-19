#include <stdio.h>

char arr[101][101] = {0};

int main(){
	int a,b,c,d, sum=0;
	for(int i=0; i<4; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(int j=a; j<c; j++){
			for(int k=b; k<d; k++){
				arr[j][k] = 1;
			}
		}
	}
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(arr[i][j] == 1) sum++;
		}
	}
	printf("%d", sum);
	
	return 0;
}
