#include <stdio.h>

int main(){
	int d1, d2;
	double ans = 0;
	scanf("%d %d", &d1, &d2);
	ans += d1 * 2;
	ans += 3.141592 * d2 * 2;
	printf("%lf", ans);
	return 0;
}
