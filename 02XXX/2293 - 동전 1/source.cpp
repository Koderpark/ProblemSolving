#include <stdio.h>

int n,input[101],k;
int arr[100001] = {0};

int main(){
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &input[i]);
	}
	arr[0] = 1;
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			arr[j+input[i]] += arr[j];
		}
	}
	printf("%d", arr[k]);
	return 0;
}
