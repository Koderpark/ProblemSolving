#include <stdio.h>

int main(){
	int n,a=1;
	int data[21][21] = {0};
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){		scanf("%d", &data[0][i]);	}
	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			data[i][j] = data[i-1][j] - data[i-1][j-1];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<a; j++){
			printf("%d ", data[j][i]);
		}
		a++;
		printf("\n");
	}
}
