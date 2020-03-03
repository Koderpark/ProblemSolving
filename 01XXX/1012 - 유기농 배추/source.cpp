#include <stdio.h>

int map[52][52] = {0};

int main(){
	int t,m,n,k,x,y,sum;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		sum=0;
		for(int i=0; i<=51; i++)for(int j=0; j<=51; j++)map[i][j] = 0;
		scanf("%d %d",&m,&n);
		scanf("%d",&k);
		for(int j=0; j<k; j++){
			scanf("%d %d",&x,&y);
			map[x+1][y+1] = 1;
		}
		for(int j=1; j<=50; j++){
			for(int l=1; l<=50; l++){
				if(map[j][l] == 1){
					map[j][l] = 2;
					if(map[j-1][l]!=2 && map[j][l-1]!=2 && map[j+1][l]!=2 && map[j][l+1]!=2){
						sum++;
					}
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
