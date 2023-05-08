#include <stdio.h>
#include <algorithm>
using namespace std;
 
int arr[8] = {0};
int main(){
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+7);
    printf("%d\n%d", arr[6] , arr[5]);
 
}

