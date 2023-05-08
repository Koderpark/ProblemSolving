#include <stdio.h>
#include <string.h>

int main(){
	char arr1[100] = {0};
	char arr2[100] = {0};
	scanf("%s %s", &arr1, &arr2);
	if(strlen(arr1) > strlen(arr2)){	printf("%s %s", arr2, arr1);	return 0;	}
	if(strlen(arr1) < strlen(arr2)){	printf("%s %s", arr1, arr2);	return 0;	}
	for(int i=0; i<strlen(arr1); i++){
		if(arr1[i] > arr2[i]){	printf("%s %s", arr2, arr1);	return 0;	}
		if(arr1[i] < arr2[i]){	printf("%s %s", arr1, arr2);	return 0;	}
	}
	return 0;
}
