#include <stdio.h>
#include <math.h>

int arr[101] = {0};

int main(){
	int n,m,tmp,best=-1;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	int min=999999;
	
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) for(int k=0; k<n; k++){
		if(i==j || j==k || i==k) continue;
		tmp = arr[i]+arr[j]+arr[k];
		if(m>=tmp && best<tmp) best = tmp;
	}
	printf("%d", best);
	return 0;
}
