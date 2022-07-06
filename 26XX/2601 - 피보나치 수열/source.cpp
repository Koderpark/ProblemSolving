#include <stdio.h>
 
int arr[101] = {1};
 
 
int main(){
    int n;
    scanf("%d", &n);
 
    for(int i=0; i<n; i++){
        arr[i+1] = arr[i] + arr[i-1];
    }
    printf("%d",arr[n-1]);
}
