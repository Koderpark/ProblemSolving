#include <stdio.h>
#include <algorithm>
 
int main(){
    int n,k;
    int counter = 1;
    int arr[10000];
     
    scanf("%d %d", &n, &k);
     
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            arr[counter] = i;
            counter++;
        }
    }
    printf("%d", arr[k]);
    return 0;
}

