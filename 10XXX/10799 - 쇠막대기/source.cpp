#include <stdio.h>
#include <string.h>

char input[123456] = {0};

int main(){
	int ans=0;
	int sum=0;
	scanf("%s", input);
	int len = strlen(input);
	for(int i=0; i<len; i++){
		if(input[i] == '(' && input[i+1] == ')'){ ans += sum; i++; }
		else if(input[i] == '('){ sum++; }
		else if(input[i] == ')'){ sum--; ans++; }
	}
	printf("%d", ans);
	return 0;
}
