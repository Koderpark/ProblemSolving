#include <stdio.h>
 
int array[11] = {0};
int count[1001] = {0};
int a = 0;
int max = 0;
int main(){
    for(int i=0; i< 10; i++){
        scanf("%d", &array[i]);
        a += array[i];
    }
 
    for(int i=0; i<10; i++){
        count[array[i]]++;
 
    }
 
    for(int i=0; i<1001; i++){
        if(max < count[i]){
            max = count[i];
        }
    }
 
    for(int i=0; i<1001; i++){
        if(max == count[i]) {
        printf("%d\n%d",a/10 , i);
        break;
        }
    }
    return 0;
}

