#include <stdio.h>

int main(){
	int a,b,c,d,e,f,ts,te,time;
	for(int i=0; i<3; i++){
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		ts = c+ b*60 + a*60*60;
		te = f+ e*60 + d*60*60;
		time = te-ts;

		printf("%d %d %d\n",time/(60*60), time/60%60, time%60);
	}
}
