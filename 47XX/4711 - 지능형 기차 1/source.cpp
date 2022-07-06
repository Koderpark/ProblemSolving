#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main(){
    int people = 0;
    int arr[4];
    int a,b;
    for(int i=0; i<4; i++){
        scanf("%d %d", &a, &b);
        people = people - a + b;
        arr[i] = people;
    }   
    sort(arr, arr+4);
    printf("%d", arr[3]);
}

