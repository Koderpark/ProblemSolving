#include <stdio.h>

int nation[1010] = {0};
int   gold[1010] = {0};
int silver[1010] = {0};
int copper[1010] = {0};

int main(){
	int n,k,idx,ans=0;
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i++){
		scanf("%d", &nation[i]);
		scanf("%d",   &gold[i]);
		scanf("%d", &silver[i]);
		scanf("%d", &copper[i]);
	}
	
	for(int i=0; i<n; i++) if(k==nation[i]) idx = i;
	for(int i=0; i<n; i++){
		if(i==idx) continue;
		if(gold[i]> gold[idx]){ ans++; continue; }
		if(gold[i]==gold[idx] && silver[i]> silver[idx]){ ans++; continue; }
		if(gold[i]==gold[idx] && silver[i]==silver[idx] && copper[i]>copper[idx]){ ans++; continue; }
	}
	printf("%d", ans+1);
	return 0;
}
