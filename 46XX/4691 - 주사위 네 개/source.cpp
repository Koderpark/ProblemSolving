#include <stdio.h>
 
 
int main(){
    int dice[7];
    int s;
    int n;
    int m;
    int i;
    int money = 0;
    scanf("%d", &m);
    while(m--){
        s=0;
        for(i=0; i<7; i++) dice[i] = 0;
        for(i=0; i<4; i++){
            scanf("%d", &n);
            dice[n]++;
            if(dice[n]==2 && s==0) s = 1000 + n * 100;
            else if(dice[n]==2 && s > 0) s=(s-1000)*5 + n * 500 + 2000;
            if(dice[n]==3) s = 10000 + n * 1000;
            if(dice[n]==4) s = 50000 + n * 5000;
        }
 
        if(s == 0){
            for(i=6; i>0; i--){
                if(dice[i]==1 && s < 1){s=i*100;}
            }
        }
        if(money < s){
            money = s;
        }
 
    }
    printf("%d", money);
 
}

