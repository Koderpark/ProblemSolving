#include <stdio.h>
#include <math.h>

int main(){
	int time;
	int s,e;
	long long int j,tmp;
	
	scanf("%d", &time);
	for(int i=0; i<time; i++,j=0){
		scanf("%d %d",&s,&e);
		while(j*j<=e-s)j++;
		j--;
		tmp = (e-s) - (j*j);//나머지구하기 1 
		tmp = (long long int)ceil((double)tmp / (double)j); //나머지 2
		printf("%lld\n", j*2-1 + tmp);
	}
	return 0;
}
