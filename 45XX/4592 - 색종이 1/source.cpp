#include <stdio.h>
#include <algorithm>
using namespace std;
 
int arr[101][101] = {0};
int main(){
    int time;
    int x,y;
    int counter = 0;
    scanf("%d", &time);
 
    for(int i=0; i<time; i++){
        scanf("%d %d", &x, &y);
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                arr[i+x][j+y] = 1;
            }
        }
    }
 
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j] == 1){
                counter++;
            }
        }
    }
    printf("%d", counter);
}

