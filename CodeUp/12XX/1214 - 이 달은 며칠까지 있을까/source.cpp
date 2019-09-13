#include <stdio.h>

int main(){
	int n[2] = {0};
	
	scanf("%d %d", &n[0] , &n[1]);
	
	if (n[0] % 4 == 0 && n[0] % 100 != 0) {
        if (n[1] == 2)		printf("29");
        else if(n[1]==1)	printf("31");
        else				printf("%d", n[1] % 2 == 0 ? 31 : 30);
    }
    else if (n[0] % 400 == 0) {
        if (n[1] == 2)		printf("29");
        else if (n[1] == 1)	printf("31");
        else				printf("%d", n[1] % 2 == 0 ? 31 : 30);
    }
    else {
        if (n[1] == 2)		printf("28");
        else if (n[1] == 1)	printf("31");
        else				printf("%d", n[1] % 2 == 0 ? 31 : 30);
    }
}
