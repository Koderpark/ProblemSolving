#include <stdio.h>
#include <string.h>

char arr[501] = {0};

int main(){
	int sum=0;
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++)sum+=arr[i]-48;
	printf("%d", sum%3?0:1);
	return 0;
}
