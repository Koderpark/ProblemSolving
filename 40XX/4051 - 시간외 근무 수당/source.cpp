#include <stdio.h>
#include <algorithm>
 
 
int main(){
    float s,e;
    float time;
     
    for(int i=0; i<5; i++){
        scanf("%f %f", &s, &e);
        time += e-s < 1 ? 0 : e-s-1 > 4 ? 4 : e-s-1;
    }
    int money = time * 10000;
    if(time >= 15) money = time * 10000 * 95 / 100;
    if(time <= 5 ) money = time * 10000 *105 / 100;
     
    printf("%d", money);
     
     
    return 0;
}

