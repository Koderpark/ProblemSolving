#include <stdio.h>

int main(){
	int n;
	int sum=1;
	int arr[101][101] = {0};
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		if(i%2==0)	for(int j=0; j<n; j++)	arr[j][i]+=sum++;
		else		for(int j=0; j<n; j++)	arr[n-j-1][i]+=sum++;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
