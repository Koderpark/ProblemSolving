#include <stdio.h>
#include <string.h>
#include <algorithm>
 
int main(){
    char arr[52] = {'\0'};
    scanf("%s", arr);
    char pluszero;
    char plusone;
    int length = 0;
    //( == 40
    //) == 41
    for(int i=0; i<strlen(arr); i++){
        pluszero = arr[i];
        plusone  = arr[i+1];
         
        if(pluszero == plusone){
            length += 5;
        }else if(pluszero != plusone){
            length += 10;
        }
    }
    printf("%d", length);
}

