#include <stdio.h>
#include <algorithm>
 
int main(){
    int arr[5] = {0};
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
     
    int add = arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] + arr[3] * arr[3] + arr[4] * arr[4];
    printf("%d", add%10);
    return 0;
}

