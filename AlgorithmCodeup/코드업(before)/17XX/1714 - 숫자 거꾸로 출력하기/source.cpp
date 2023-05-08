#include <stdio.h>
#include <string.h>

char num[10] = {0};

int main(){
	scanf("%s", &num);
	for(int i=1; i<=strlen(num); i++) printf("%c", num[strlen(num)-i]);
}
