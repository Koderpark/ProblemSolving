#include <stdio.h>
#include <algorithm>
using namespace std;
 
 
int main(){
    int arr[5];
    int max = 0;
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);\
        max += arr[i];
    }
    sort(arr, arr+5);
    printf("%d\n%d", max / 5, arr[2]);
}

