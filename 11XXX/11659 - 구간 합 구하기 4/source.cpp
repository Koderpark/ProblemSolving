#include <stdio.h>

typedef long long int ll;
int arr[123456] = {0};
ll prefix[123456] = {0};

int main(){
	int n,m;
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){ scanf("%d", &arr[i]); }
	for(int i=1; i<=n; i++){ prefix[i] = prefix[i-1] + arr[i]; }
	
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", prefix[b]-prefix[a-1]);
	}
	return 0;
}
