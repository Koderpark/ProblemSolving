#include <stdio.h>
#include <algorithm>
 
int main(){
    int n,c;
    int k = 0;
    int arr[101] = {0};
    scanf("%d %d", &n, &c);
     
    for(int i=0; i<n; i++)scanf("%d", &arr[i]);
     
    std::sort(&arr[0], &arr[n]);
     
    for(int i=0; i<n; i++, k++){
        if(k == c){
            k = 0;
            printf("\n");
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
