#include <stdio.h>

bool plane[100001] = {0};

int main(){
	int g,p,tmp,sum=0;
	scanf("%d %d", &g, &p);
	for(int i=0; i<p; i++){
		scanf("%d", &tmp);
		for(int j=tmp; j>=1; j--){
			if(plane[tmp] == false){
				sum++;
				plane[tmp] = true;
				break;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
