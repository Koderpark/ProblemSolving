 
#include <stdio.h>

int main(){
	int arr[101][101];
	int x=0, y=-1;
	int dir=1;
	int n;
	int cnt=1;
	
	scanf("%d",&n);
 	
	int max = n;
	while(0<=max){
		for(int i=0; i<max; i++){
			y+=dir;
			arr[x][y]=cnt++;
		}	
    	max--;
    	for(int i=0; i<max; i++){
    		x+=dir;
    		arr[x][y]=cnt++;
		}	
		dir*=-1;
	}
  
	for(int i=0;i<n;i++){    
		for(int j=0;j<n;j++)	printf("%d ",arr[i][j]);
    	printf("\n");
	}
	return 0;
}

