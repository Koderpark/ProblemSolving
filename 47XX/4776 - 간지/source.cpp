#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
 
 
int main(){
    int year;
    scanf("%d", &year);
     
    int time = year - 2013;
    int ten    = (time + 9 )% 10;
    int twelve = (time + 6 )% 12;
    while(twelve + 64 < 65) twelve += 12;
    while(ten  <  9   ) ten    += 10;
    printf("%C%d", (twelve) + 64, (ten) % 10);
}

