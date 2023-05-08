#include <stdio.h>

int main(){
	int n,tmp,answer=0;
	scanf("%d", &n);
	
	for(int i=666, time=1; time<=n; i++){
		tmp = i;
		while(tmp){
			if(tmp%1000 == 666){
				time++;
				answer = i;
				break;
			}
			tmp /= 10;
		}
	}
	printf("%d", answer);
	return 0;
}
