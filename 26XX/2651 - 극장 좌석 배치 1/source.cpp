#include <stdio.h>
int n;
int k;
int c = 0;
int f(int place, int person){
    if(person == k) { c++; return 0;}
    if(place == n) return 0;
 
    f(place + 1, person +1); // »ç¶÷ ¾ÉÀ½
    f(place + 1, person );   // ¾ÉÁö ¾ÊÀ½
}
 
 
int main(){
    scanf("%d %d", &n , &k);
    f(0,0);
    printf("%d", c);
}
