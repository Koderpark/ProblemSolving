#include <stdio.h>

int main(){
	char arr[100001];
	int left = 0,right = 0;
	scanf("%s", &arr);
	
	for(int i=0; arr[i] != '\0'; i++){
		if		(arr[i] == ')')right++;
		else if (arr[i] == '(')left++;
	} 
	printf("%d %d", left , right);
	return 0;
}
