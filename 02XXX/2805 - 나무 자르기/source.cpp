#include <stdio.h>

int n, m;
int arr[1000010] = {0};
int max(int a, int b){ return a>b?a:b; }

int parametric(int s, int e){
	int mid = (s+e)/2;
	long long int sum = 0;
	
	if(s == e) return mid-1;
	
	for(int i=0; i<n; i++){ sum += max(0, arr[i]-mid); }
	
	if(sum-m < 0) return parametric(s,mid);
	if(sum-m > 0) return parametric(mid+1, e);
	
	if(sum-m == 0) return mid;
	
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	printf("%d", parametric(0, 1000000000));
	return 0;
}
