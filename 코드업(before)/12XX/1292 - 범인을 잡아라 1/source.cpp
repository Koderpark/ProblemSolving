#include <stdio.h>
#include <string.h>

int main(){
	char arr[11] = {0};
	int sum;
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++){
		sum+=arr[i]-48;
	}
	printf("%s", sum%7==4?"suspect":"citizen");
	return 0;
}
