#include <stdio.h>
#include <algorithm>
 
int main(){
    int arr[101];
    for(int i=1; i<=100; i++){
        arr[i] = i*i;
    }
     
    int min, max;
    int add = 0;
    int minimum = 0;
    scanf("%d %d", &min, &max);
     
    int a = 0;
    for(int i=1; i<=100; i++){
        if(min <= arr[i] && arr[i] <= max){
            if(a == 0){
                a = 1;
                minimum = arr[i];
            }
            add += arr[i];
        }
    }
     
    printf("%d\n%d", add , minimum);
    return 0;
}

