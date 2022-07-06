#include <stdio.h>
#include <string.h>

char num[101] = {0};

int main(){
	int l;
	scanf("%d", &l); 
	scanf("%s", num);
	for(int i=0; i<l; i++){
		if((l-i)%3==0 && i!=0) printf(",");
		printf("%c", num[i]);
	}
	return 0;
}
