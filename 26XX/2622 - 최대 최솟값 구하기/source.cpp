#include <stdio.h>

int arr[10001] = {0};

int main(){
	int n;
	int max = 0;
	int min = 32768;
	int maxp,minp;
	scanf("%d", &n);
	for(int i=0; i<n; i++)scanf("%d", &arr[i]);
	
	for(int i=n-1; i>=0; i--){
		if(max <= arr[i]){max=arr[i]; maxp=i+1;}
		if(min >= arr[i]){min=arr[i]; minp=i+1;}
	}
	printf("%d : %d\n", maxp, max);
	printf("%d : %d", minp, min);
	return 0;
}
