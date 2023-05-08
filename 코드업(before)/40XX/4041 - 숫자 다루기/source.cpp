#include <stdio.h>
 
int main(){
char a[7] = {0,};
int i;
int j = 1;
int max = 0;
scanf("%s", &a);
    for(i=6; i>=0; i--){
        if(a[i] != '\0' && a[i] != '\n'){
            if(a[i] == '0' && j != 0){
            }else{
            printf("%d", a[i]-'0');
            max = max + a[i]-'0';
            j=0;
            }
 
        }
    }
    printf("\n%d", max);
}

