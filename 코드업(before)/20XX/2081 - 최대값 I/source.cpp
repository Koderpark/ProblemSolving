#include <stdio.h>

int arr[10] = {0};

int main(){
	int max=0, maxi;
	for(int i=0; i<9; i++)scanf("%d", &arr[i]);
	for(int i=0; i<9; i++)if(max < arr[i]){max = arr[i]; maxi= i;}
	printf("%d\n%d", max, maxi+1);
	return 0;
}
