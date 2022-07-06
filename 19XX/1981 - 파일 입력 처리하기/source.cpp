#include <stdio.h>

int main(){
	char arr[4096] = {0};
	FILE *fi = fopen("secret.dic", "r");
	while(fgets(arr, sizeof(arr), fi) != NULL)	printf("%s", arr);
	fclose(fi);
	return 0;
}
