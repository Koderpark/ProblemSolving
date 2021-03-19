#include <stdio.h>

int arr[1001][1001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=n-1; i>0; i--){
		for(int j=1; j<n; j++){
			if(arr[i][j] > arr[i][j-1]) arr[i-1][j-1] += arr[i][j];
			else						arr[i-1][j-1] += arr[i][j-1];
		}
	}
	printf("%d", arr[0][0]);
	return 0;
}
