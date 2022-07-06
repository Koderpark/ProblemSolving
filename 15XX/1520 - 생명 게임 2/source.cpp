#include <stdio.h>
int arr[171][171] = {0,};
int arr2[171][171] = {0,};
int a,b;

int count = 0;
int x,y,z;
int gen = 0;
    
int check(int i, int j){
	return 	
	arr[i+1][j] + 
	arr[i][j+1] + 
	arr[i-1][j] + 
	arr[i][j-1] + 
	arr[i+1][j+1] + 
	arr[i-1][j-1] + 
	arr[i-1][j+1] + 
	arr[i+1][j-1] ;
}


int main(){
    
    scanf("%d %d",&a, &b);
    scanf("%d %d %d", &x, &y, &z);
 
    for(int i=1; i<=a; i++)	for(int j=1; j<=b; j++)	scanf("%d",&arr[i][j]);
    
    scanf("%d", &gen);
 
    for(int g=0; g<gen; g++){
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                if(arr[i][j] == 0){
                    count = check(i,j);
                    if(count == x)	arr2[i][j] = 1;
                }else{
                    count = check(i,j);
                    if((count>=y)&&(count<z))	arr2[i][j] = 1;
                }
                count=0;
            }
        }
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                arr[i][j] = arr2[i][j];
                arr2[i][j] = 0;
            }
        }
    }
    for(int i=1; i<=a; i++, puts(""))	for(int j=1; j<=b; j++)	printf("%d ",arr[i][j]);
    return 0;
}
