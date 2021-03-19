#include <stdio.h>

int arr[1234] = {0};

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	
	if(n < k*(k+1)/2){ printf("-1"); return 0; }
	for(int i=1; i<=k; i++){ arr[i] = i; n-=i; }
	
	int ptr=k;
	while(n){
		arr[ptr]++;
		ptr--;
		n--;
		if(ptr==0) ptr = k;
	}
	printf("%d", arr[k]-arr[1]);
	return 0;
} 
