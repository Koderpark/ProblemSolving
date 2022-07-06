#include <stdio.h>
#include <algorithm>
 
 
int main(){
    long long int money;
     
    scanf("%lld", &money);
 
 
 
    if(money <= 500)    {money = money * 70 / 100;}
    if(money > 500   && money <= 1500 ) {money = 350  + (money - 500  ) * 0.4;}
    if(money > 1500  && money <= 4500 )   {money = 750  + (money - 1500 ) * 0.15;}
    if(money > 4500  && money <= 10000) {money = 1200 + (money - 4500 ) * 0.05;}
    if(money > 10000)    {money = 1475 + (money - 10000) * 0.02;}
     
    printf("%d", money);
     
}

