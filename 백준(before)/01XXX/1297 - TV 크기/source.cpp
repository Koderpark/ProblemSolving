#include <stdio.h>
#include <math.h>
int main(){
	int len, height, width;
	double k;
	scanf("%d %d %d", &len, &height, &width);
	k = sqrt(height*height + width*width);
	printf("%d %d", (int)(height * len / k), (int)(width  * len / k));
	return 0;
}
