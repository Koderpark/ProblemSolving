#include <stdio.h>

int main(){
	int min,max;
	int vmin=100000, vsum=0;
	scanf("%d %d", &min, &max);
	for(int i=1; i<=100; i++){
		if(min<=i*i && i*i<=max){
			if(vmin > i*i){
				vmin = i*i;
			}
			vsum+=i*i;
		}
	}
	if(vmin==100000){
		printf("-1");
	}
	else{
		printf("%d\n%d",vsum,vmin);
	}
	return 0;
}
