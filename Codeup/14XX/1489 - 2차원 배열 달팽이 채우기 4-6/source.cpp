 
#include <stdio.h>
int main()
{
   	int n=0, i=0, j=0, s=1;
   	int arr[101][101]={0};
 
   	int a=0, b=0;
   	
   	scanf("%d",&a);
   	scanf("%d",&b);
   	
	int e=a, r=b;
	
	j=b+1;
	i=a;
	n=a*b;
	
	while(a>0){
		s*=-1;
      	for(int p=1;p<=b;p++){
         	j+=s;
        	arr[i][j]=n--;
      	}
      	a--;
      	if(b>0){
      		for(int p=1;p<=a;p++){
           		i+=s;
            	arr[i][j]=n--;
        	}
      	}
      	b--;
	}
	
	for(int i=1; i<=e; i++){
        for(int j=1; j<=r; j++)printf("%d ",arr[i][j]);
        printf("\n");
    }
}
