#include <stdio.h>
#include <algorithm>

int main(){
	int a[3], b[2];
	for(int i=0; i<3; i++) scanf("%d", &a[i]);
	for(int i=0; i<2; i++) scanf("%d", &b[i]);
	std::sort(a, a+3);
	std::sort(b, b+2);
	printf("%d", a[0]+b[0]-50);
	return 0;
}
