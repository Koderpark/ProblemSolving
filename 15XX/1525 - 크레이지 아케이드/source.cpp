#include <stdio.h>
#include <algorithm>  
  
using namespace std;  
int func(int c){		return c>=10?9:c;   }

int main(){
    int arr[10][10] = {0};
	int arr2[10][10] = {0};
	int player[1000][2];
	int x,y,n;
	
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]<0) arr2[i][j]=-1;
        }
    }
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&player[i][0],&player[i][1]);
        player[i][0]--;
        player[i][1]--;
        arr2[player[i][0]][player[i][1]]=i+1;
    }
    
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i][j]<=0)continue;
            
            for(int k=j; k>=max(0,j-arr[i][j]); k--){
                if(arr[i][k]<0)break;
                arr2[i][k]=-2;
            }
            for(int k=j; k<=func(j+arr[i][j]); k++){
                if(arr[i][k]<0)break;
                arr2[i][k]=-2;
            }
            for(int k=i; k>=max(0,i-arr[i][j]); k--){
                if(arr[k][j]<0)break;
                arr2[k][j]=-2;
            }
            for(int k=i; k<=func(i+arr[i][j]); k++){
                if(arr[k][j]<0)break;
                arr2[k][j]=-2;
            }
        }
    }
    
    
    for(int i=0;i<10;i++,puts("")){
        for(int j=0;j<10;j++){
            printf("%d ", arr2[i][j]);
        }
    }
    
    printf("Character Information\n");
    for(int i=0; i<n; i++){
        x=player[i][0];
		y=player[i][1];
		
        if(arr2[x][y] == -2)	printf("player %d dead\n",i+1);
        else 					printf("player %d survive\n",i+1);
    }
    return 0;
}
