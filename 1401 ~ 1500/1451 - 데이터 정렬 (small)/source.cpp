#include <stdio.h>
 
int main(){
    int n;
    int a;
    int data[10000];
    scanf("%d", &n);
 
    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(data[i] < data[j]){
                a = data[i];
                data[i] = data[j];
                data[j] = a;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n", data[i]);
    }
}
