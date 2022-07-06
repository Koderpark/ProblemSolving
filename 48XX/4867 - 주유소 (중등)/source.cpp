#include <stdio.h>
 
int c[100001] = {0};
int o[100010] = {0};
int main(){
    long long int n,min=10000000000,i,t=0;
    scanf("%lld", &n);
 
    for(i=0; i<n-1; i++){scanf("%lld", c+i);}
    for(i=0; i<n; i++){scanf("%lld", o+i);}
    for(i=0; i<n-1; i++){
        if(min>o[i])min=o[i];
        t+=min*c[i];
    }
    printf("%lld", t);
 
}

