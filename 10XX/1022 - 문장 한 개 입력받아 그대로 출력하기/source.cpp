#include <stdio.h>

int main(){
	char arr[2001];
	fgets(arr , 2000 , stdin);
	printf("%s", arr);
}
