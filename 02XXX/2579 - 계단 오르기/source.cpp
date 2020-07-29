#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int arr[301] = {0};
int n;

int f(int k, int time, int score){
	score+=arr[k];
	if(k > n) return 0;
	if(k == n) return score;
	
	if(time==3) return f(k+2, 0, score);
	else return MAX(f(k+1, time+1, score),f(k+2,0,score));
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	printf("%d", f(n,0,0));
}
