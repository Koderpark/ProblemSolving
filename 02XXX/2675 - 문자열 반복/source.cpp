#include <stdio.h>
#include <string.h>

int main(){
	int t,r;
	char a[21] = {0};
	scanf("%d", &t);
	for(int i=0; i<t; i++,puts("")){
		scanf("%d %s",&r,a);
		for(int j=0; j<strlen(a); j++){
			for(int k=0; k<r; k++){
				printf("%c", a[j]);
			}
		}
	}
	return 0;
}
