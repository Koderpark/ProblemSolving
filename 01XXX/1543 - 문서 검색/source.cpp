#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[3456] = {0};
char input[123] = {0};

bool compare(int idx, char *s1, char *s2){
	bool ret = 1;
	int length = strlen(s2)-1;
	for(int i=0; i<length; i++){
		if(s2[i] != s1[idx+i]){ ret = 0; break; }
	}
	return ret;
}

int main(){
	int ans = 0;
	fgets(arr, 3000, stdin);
	fgets(input, 55, stdin);
	
	int l1 = strlen(arr)-1;
	int l2 = strlen(input)-1;
	
	if(l1 < l2){
		printf("0");
		return 0;
	}
	
	for(int i=0; i<=l1-l2;){
		if(compare(i, arr, input)){
			i+=l2;
			ans++;
		}
		else i++;
	}
	printf("%d", ans);
	return 0;
}
