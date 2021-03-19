#include <stdio.h>

int main(){
	int n,k,sum=0;
	int arr[11] = {0};
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=n; i>=1; i--){
		while(arr[i] <= k){
			k -= arr[i];
			sum++;
		}
	}
	printf("%d", sum);
}
