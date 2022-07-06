#include <stdio.h>
 
int main(){
    int n;
    int temp;
    int array[101] = {0};
     
    scanf("%d", &n);
     
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
     
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
     
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
