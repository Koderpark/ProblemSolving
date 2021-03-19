#include <stdio.h>

int map[101][101] = {0};

int main(){
	int a,b,c,d,sum=0;
	for(int i=0; i<4; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(int i=a; i<c; i++){
			for(int j=b; j<d; j++) map[i][j] = 1;
		}
	}
	for(int i=0; i<101; i++){
		for(int j=0; j<101; j++){
			if(map[i][j] == 1) sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
