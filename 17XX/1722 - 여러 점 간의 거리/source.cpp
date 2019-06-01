#include <stdio.h>

int arr[2][101] = {0};

int main(){
	int n;
	float sum=0;
	scanf("%d", &n);
	scanf("%d %d", &arr[0][0], &arr[1][0]);
	for(int i=1; i<=n; i++){
		scanf("%d %d", &arr[0][i], &arr[1][i]);
		sum+=((arr[0][i] - arr[0][i-1]) * (arr[0][i] - arr[0][i-1]) + (arr[1][i] - arr[1][i-1]) * (arr[1][i] - arr[1][i-1]))/((arr[0][i] - arr[0][i-1]) * (arr[0][i] - arr[0][i-1]) + (arr[1][i] - arr[1][i-1]) * (arr[1][i] - arr[1][i-1]));
		printf("%f\n", sum);
	}
	return 0;
}
