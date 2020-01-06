#include <stdio.h>

char arr[101] = {0};

int main(){
	int n,sum=0;
	scanf("%d", &n);
	scanf("%s", arr);
	for(int i=0; i<n; i++){
		sum+=arr[i]-48;
	}
	printf("%d", sum);
	return 0;
}
