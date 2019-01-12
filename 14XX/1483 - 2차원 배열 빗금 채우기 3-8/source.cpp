#include <stdio.h>

int main(){
	int data[101][101] = {0};
	int n,m;
	int a=0;
	scanf("%d %d", &n, &m);
	
	for(int s=0; s<n+m-1; s++){
		for(int i=0; i<m; i++){
			int j=s-i;
			if(j>=0 && j<n){
				a++;
				data[j][i] = a;
			}
		}
	}
	
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<m; j++){
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	return 0;
}
