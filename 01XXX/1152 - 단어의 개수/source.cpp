#include <stdio.h>
#include <string.h>

char a[1000001] = {0};

int main(){
	fgets(a, 1000000, stdin);
	int length = strlen(a);
	int cnt=1;
	if(a[0] == ' ') cnt=0;
	for(int i=0; i<length-1; i++){
		if(a[i] == ' ') cnt++;
	}
	if(a[length-2] == ' ') cnt--;
	printf("%d", cnt);
	return 0;
}
