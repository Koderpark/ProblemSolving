#include <stdio.h>
 
int main(){
    int h,m,time,a;
    scanf("%d %d", &h, &m);
    time = h * 60 + m - 30;
    time += 24*60;
    time %= (24*60);
    printf("%d %d", time/60 , time%60);
    return 0;
}
