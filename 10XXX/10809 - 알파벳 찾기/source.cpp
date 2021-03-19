#include <stdio.h>
#include <string.h>

int pos[201] = {0};
char a[101] = {0};

int main(){
	scanf("%s", a);
	for(int i=0; i<201; i++)pos[i] = -1;
	for(int i=0; i<strlen(a); i++) if(pos[a[i]] == (-1))pos[a[i]] = i; 
	for(int i='a'; i<='z'; i++) printf("%d ", pos[i]);
}
