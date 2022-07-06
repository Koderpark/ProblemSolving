#include <stdio.h>

int main(){
	int arr[100] = {0};
	char arr2[100] = {0};
	int i=0;
	scanf("%d%c", &arr[i], &arr2[i]);
	do{
		i++;
		scanf("%d%c", &arr[i], &arr2[i]);
		switch(arr2[i-1]){
			case '+':{
				arr[i] = arr[i-1] + arr[i];
				break;
			}
			case '-':{
				arr[i] = arr[i-1] - arr[i];
				break;
			}
			case '*':{
				arr[i] = arr[i-1] * arr[i];
				break;
			}
			case '/':{
				arr[i] = arr[i-1] / arr[i];
				break;
			}
		}
	}while(arr2[i]!='=');
	printf("%d", arr[i]);
	return 0;
}
