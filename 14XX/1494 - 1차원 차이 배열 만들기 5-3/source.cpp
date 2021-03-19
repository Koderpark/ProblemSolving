#include <stdio.h>

int main(){
	int n;
	int d[101] ={0};
	int k;
	int s,e,u;
	int sum=0;
	
	scanf("%d %d", &n, &k);
	for(int i=0; i<k; i++){
		scanf("%d %d %d", &s, &e, &u);
		d[s]+=u;
		d[e+1]-=u;
	}
	for(int i=1; i<=n; i++) printf("%d ", d[i]);
	printf("\n");
	for(int i=1; i<=n; i++) printf("%d ", sum+=d[i]);
	return 0;
}
