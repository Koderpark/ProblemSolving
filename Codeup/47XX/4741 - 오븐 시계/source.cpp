#include <stdio.h>
#include <algorithm>
 
int main(){
    int hour,minute;
    scanf("%d %d", &hour, &minute);
     
    int plustime;
    scanf("%d", &plustime);
     
    int time = hour * 60 + minute + plustime;
     
    while(time >= 24 * 60) time = time - 24 * 60;
     
    printf("%d %d", time / 60, time % 60);
}

