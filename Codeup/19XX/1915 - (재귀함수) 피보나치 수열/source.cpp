#include <stdio.h>
 
int arr[101] = {1};
int turn = 1;
 
void f(int time, int i){
    arr[i+1] = arr[i] + arr[i-1];
    
    if(time == i){
        printf("%d", arr[i-1]);
        return;
    }
	else{  f(time, i+1);  }
}
 
int main(){
    int n;
    scanf("%d", &n);
    f(n, 0);
	return 0;
}
 
