#include <stdio.h>
#include <algorithm>
int a[101] = {0};
int b[101] = {0};

int main(){
	int n,sum = 0;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	
	std::sort(a,a+n);
	std::sort(b,b+n);
	
	for(int i=0; i<n; i++){
		sum += a[i]*b[n-i-1];
	}
	
	printf("%d", sum);
	return 0;
}
