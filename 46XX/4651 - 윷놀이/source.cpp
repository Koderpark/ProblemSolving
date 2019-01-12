#include <stdio.h>
#include <algorithm>
 
int main(){
    char arr[3] = {0};
    int add;
    int a,b,c,d;
    for(int i=0; i<3; i++){
        scanf("%d %d %d %d", &a,&b,&c,&d);
        add = a+b+c+d;
        if(add == 0) arr[i] = 'D'; //À· 
        if(add == 1) arr[i] = 'C'; //°É
        if(add == 2) arr[i] = 'B'; //°³
        if(add == 3) arr[i] = 'A'; //µµ
        if(add == 4) arr[i] = 'E'; //¸ğ 
    }
     
    for(int i=0; i<3; i++){
        printf("%c\n", arr[i]);
    } 
    return 0;
}

