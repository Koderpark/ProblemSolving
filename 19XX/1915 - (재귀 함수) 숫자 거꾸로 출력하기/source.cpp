#include <stdio.h>
#include <string.h>

char numarray[101] = {0};
int n;
int logic=1;

void f(){
	if(n == 0) return;
	else{
		if(numarray[n-1] != '0') logic=0;
		if(numarray[n-1] == '0' && logic == 1);
		else printf("%c", numarray[n-1]);
		n--;
		f();
	}
}

int main(){
	scanf("%s", &numarray);
	n=strlen(numarray);
	if(n == 1){
		printf("%s", numarray);
		return 0;
	}
	f();
	return 0;
}
