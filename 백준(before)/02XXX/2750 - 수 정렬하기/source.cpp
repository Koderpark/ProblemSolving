#include <stdio.h>
#include <algorithm>

int a[1001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	std::sort(a, a+n);
	for(int i=0; i<n; i++) printf("%d\n", a[i]);
	return 0;
}
