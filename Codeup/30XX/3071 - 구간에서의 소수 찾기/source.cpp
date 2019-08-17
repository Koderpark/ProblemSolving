#include <stdio.h>
 
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
 
    int data[b + 1];
    for(int i=2; i<=b; i++) data[i] = 1;
    for(int i=2; i*i<=b; i++){
        if(data[i] == 1){
            for(int j=i*i; j<=b; j+= i) data[j] = 0;
        }
    }
 
    for(int i=a; i<=b; i++){
        if(data[i] == 1){
            printf("%d ", i);
        }
    }
}
 

