#include <stdio.h>
 
int main(){
    int a[7] = {0,};
    int b[7] = {0,};//¦
    int c[7] = {0,};//Ȧ
    int bmax = 0;
    int cmax = 0;
    scanf("%d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
 
    int i;  int bi = 0;  int ci = 0;
    for(i=0; i < 7 ; i++){
        if(a[i] % 2 == 0){
            b[bi++] = a[i];
        }else{
            c[ci++] = a[i];
        }
    }
    for(i=0; i<7 ; i++){
        if(c[i] != 0){
            cmax = cmax + c[i];
        }
    }
    if(cmax != 0){
    printf("%d", cmax);
    }else{
    printf("-1");
    }
    return 0;
}
 

