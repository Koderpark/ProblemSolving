#include <stdio.h>

int ramen[10010] = {0};
int cost=0;

int min(int a, int b){return a>b?b:a;}

void three(int k){
	while(ramen[k]&&ramen[k+1]&&ramen[k+2]){
		ramen[k]--;
		ramen[k+1]--;
		ramen[k+2]--;
		cost+=7;
	}
}

void two(int k){
	while(ramen[k]&&ramen[k+1]){
		ramen[k]--;
		ramen[k+1]--;
		cost+=5;
	}
}

void one(int k){
	cost+=3*ramen[k];
}


int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &ramen[i]);
	for(int i=0; i<n; i++){
		if(ramen[i+1] > ramen[i+2]){
			int k = min(ramen[i],ramen[i+1]-ramen[i+2]);
			ramen[i]-=k;
			ramen[i+1]-=k;
			cost+=5*k;
			
			three(i);
			one(i);
		}
		else { three(i); two(i); one(i); }
	}
	printf("%d", cost);
	return 0;
}
