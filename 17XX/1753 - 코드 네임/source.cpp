#include <stdio.h>
#include <string.h>
char arr[101] = {0};

int main(){
	int n, len;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &arr);
		len=strlen(arr);
		for(int j=len-1;j>=0;j--){
        	printf("%c", arr[j]);
    	}
    	printf("\n");
	}
	return 0;
}
