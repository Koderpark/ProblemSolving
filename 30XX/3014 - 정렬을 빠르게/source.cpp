#include <stdio.h>
 
int main(){
    int n;
    int a;
    int arr[100001] = {0};
    scanf("%d", &n);
     
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[a]++;
    }
     
    for(int i=0; i<=100000; i++){
        if(arr[i] != 0) for(int j = 0; j<arr[i]; j++) printf("%d ", i);
    }
     
}

