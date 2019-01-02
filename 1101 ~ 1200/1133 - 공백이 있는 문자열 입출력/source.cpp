#include <stdio.h>

int main(){
	char arr[31] = {0};
	fgets(arr , 31 , stdin);
	printf("%s", arr);
	return 0;
}
