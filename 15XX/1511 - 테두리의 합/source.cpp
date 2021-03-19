#include <stdio.h>

int main(){
	int arr[101][101] = {0};
	int n;
	int sum=0, cnt=0;
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			arr[i][j] = ++cnt;
			if(i==1||i==n||j==1||j==n)sum+=arr[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}
