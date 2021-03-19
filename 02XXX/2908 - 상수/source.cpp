#include <stdio.h>

char a[4],b[4];
char c = 'a';

int main(){
	scanf("%s %s", a, b);
	for(int i=2; i>=0; i--){
		if(a[i] == b[i]) continue;
		if(a[i] >  b[i]) { c = 'a'; break; }
		if(a[i] <  b[i]) { c = 'b'; break; }
	}
	for(int i=2; i>=0; i--){
		if(c == 'a') printf("%c", a[i]);
		if(c == 'b') printf("%c", b[i]);
	}
}
