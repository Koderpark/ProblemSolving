#include <stdio.h>
 
int main(){
    int ten;
    int binary[100] = {0,};
    int x;
    int i = 1;
    scanf("%d", &ten);
    x = ten;
    while(x >= 1){
    binary[i++] = x % 2;
    x /= 2;
    }
    int j;
    printf("2 ");
    for(j=i-1; j>0; j--){
        printf("%d", binary[j]);
    }
 
    printf("\n8 %o\n16 %X",ten,ten);
}

