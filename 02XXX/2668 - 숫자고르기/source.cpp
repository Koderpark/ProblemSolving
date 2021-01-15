#include <stdio.h>

int arr[123] = {0};
int chk[123] = {0};
int ans;
int n;

void cycle(int node, int s){
	for(int i=1; i<=n; i++){
		if(node == s){
			ans++;
			chk[node] = 1;
			return;
		}
		node = arr[node];
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	for(int i=1; i<=n; i++) cycle(arr[i],i);
	
	printf("%d\n", ans);
	for(int i=1; i<=n; i++) if(chk[i]) printf("%d\n", i);
	return 0;
}
