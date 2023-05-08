#include <stdio.h>

int main(){
	int n;
	int arr[51];
	int sum = 0;
	scanf("%d", &n);
	for(int i=0; i<n-1; i++) scanf("%d", &arr[i]);
	for(int i=1; i<=n;  i++) sum+=i;
	for(int i=0; i<n-1; i++) sum-=arr[i];
	
	printf("%d", sum);
	return 0;
}
