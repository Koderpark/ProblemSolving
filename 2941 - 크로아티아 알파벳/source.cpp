#include <stdio.h>
#include <string.h>

int main(){
	char a[101] = {0};
	int cnt=0;
	scanf("%s", a);
	int len=strlen(a);
	for(int i=0; i<len; i++){
		if(a[i]=='c'&&a[i+1]=='='){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='c'&&a[i+1]=='-'){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='d'&&a[i+1]=='z'&&a[i+2]=='='){ a[i] = a[i+1] = a[i+2] = 0; cnt++; }
		if(a[i]=='d'&&a[i+1]=='-'){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='l'&&a[i+1]=='j'){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='n'&&a[i+1]=='j'){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='s'&&a[i+1]=='='){ a[i] = a[i+1] = 0; cnt++; }
		if(a[i]=='z'&&a[i+1]=='='){ a[i] = a[i+1] = 0; cnt++; }
	}
	for(int i=0; i<len; i++){
		if(a[i] != 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
