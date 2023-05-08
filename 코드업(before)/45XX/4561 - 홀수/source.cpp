#include <stdio.h>
#include <algorithm>
using namespace std;
 
int arr[8] = {0};
int main(){
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+7);
    int mid = 0;
    int logic = 0,first = 0;
    for(int i=0; i<7; i++){
        if(arr[i] % 2 == 1){
            if(logic == 0) {first = arr[i]; logic = 1;}
            mid += arr[i];
        }
    }
     
    if(mid != 0)printf("%d\n%d", mid , first);
    else if(mid == 0)printf("-1");
}

