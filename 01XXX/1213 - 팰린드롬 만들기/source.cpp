#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int alpha[1234] = {0};
char arr[100] = {0};

int main(){
	scanf("%s", arr);
	int len = strlen(arr);
	char out=0;
	for(int i=0; i<len; i++){ if('A'<=arr[i] && arr[i]<='Z') alpha[arr[i]]++; }
	
	int chk = 0;
	for(int i='A'; i<='Z'; i++) if(alpha[i]%2 == 1){ chk++; out=i; }
	if(chk != 1 && chk != 0){ printf("I\'m Sorry Hansoo"); return 0; }
	
	for(int i='A'; i<='Z'; i++){
		if(alpha[i] != 0){
			int tmp = alpha[i]/2;
			for(int j=0; j<tmp; j++) printf("%c", i);
			alpha[i]-=tmp;
		}
	}
	
	if(out != 0){
		printf("%c", out);
		alpha[out]--;
	}
	
	for(int i='Z'; i>='A'; i--){
		if(alpha[i] != 0){
			for(int j=0; j<alpha[i]; j++) printf("%c", i);
		}	
	}
	
	return 0;
}
