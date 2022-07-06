#include <stdio.h>
#include <string.h>

int main(){
	char input[50] = {0};
	int t,sum,tmp;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%s", input);
		
		tmp = strlen(input);
		sum = 0;
	
		for(int j=0; j<tmp; j++){
			if(input[j] == '(') sum++;
			if(input[j] == ')') sum--;
			if(sum<0){
				puts("NO");
				goto end;
			}
		}
		if(sum==0) puts("YES");
		else puts("NO");
		end:;
	}
	return 0;
}
