 
#include <stdio.h>

int main(){
	int arr[101][101];
	int n;
	int cnt=1;
	
	scanf("%d",&n);
 	
	int max = n;
	int x=n+1, y=0;
	
	while(0<=max){
		for(int i=0; i<max; i++){
			x-=1;
			y+=1;
			arr[x][y]=cnt++;
		}	
    	max--;
    	y++;
    	for(int i=0; i<max; i++){
    		y-=1;
    		x+=1;
    		arr[x][y]=cnt++;
		}
		max--;
		x++;
	}
  
	for(int i=1;i<=n;i++){    
		for(int j=1;j<=n;j++)	printf("%d ",arr[i][j]);
    	printf("\n");
	}
	return 0;
}

