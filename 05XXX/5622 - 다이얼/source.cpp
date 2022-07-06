#include <stdio.h>
#include <string.h>

int chartonum[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
char a[21] = {0};
int len=0;
int sum=0;

int main(){
	scanf("%s",a);
	len = strlen(a);
	for(int i=0; i<len; i++){
		sum +=chartonum[a[i]-'A'];
	}
	printf("%d", sum);
	return 0;
}
