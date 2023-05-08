#include <stdio.h>

int arr[100001] = {0};

int main(){
	int n, find;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	scanf("%d", &find);
	for(int i=0; i<n; i++){
		if(arr[i] == find){
			printf("%d", i+1);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
