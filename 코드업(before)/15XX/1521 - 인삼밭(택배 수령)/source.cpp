#include <stdio.h>

int main(){
	int k;
	int n;
	int sum=0;
	int arr[51][51] = {0};
	
	scanf("%d %d", &k, &n);
	
	for(int i=0; i<k; i++){
		for(int j=0; j<k; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] != -1 && 0 <= arr[i][j]+n && arr[i][j]+n <= 5) sum++;
		}
	}
	
	printf("%d", sum);
	return 0;
}
