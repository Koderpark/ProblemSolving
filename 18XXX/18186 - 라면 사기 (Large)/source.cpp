#include <stdio.h>

int ramen[1000010] = {0};
long long int cost=0;
int n,b,c;

int min(int a, int b){return a>b?b:a;}

void three(int k){
	int t = min(ramen[k],min(ramen[k+1], ramen[k+2]));
	ramen[k]-=t;
	ramen[k+1]-=t;
	ramen[k+2]-=t;
	cost+=(b+2*c)*t;
}

void two(int k){
	int t = min(ramen[k],ramen[k+1]);
	ramen[k]-=t;
	ramen[k+1]-=t;
	cost+=(b+c)*t;
}

void one(int k){ cost+=b*ramen[k]; }


int main(){
	scanf("%d %d %d", &n, &b, &c);
	for(int i=0; i<n; i++) scanf("%d", &ramen[i]);
	for(int i=0; i<n; i++){
		if(ramen[i+1] > ramen[i+2]){
			int k = min(ramen[i],ramen[i+1]-ramen[i+2]);
			ramen[i]-=k;
			ramen[i+1]-=k;
			cost+=(b+c)*k;
			
			three(i);
			one(i);
		}
		else { three(i); two(i); one(i); }
	}
	printf("%lld", cost);
	return 0;
}
