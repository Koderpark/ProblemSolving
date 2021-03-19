#include <stdio.h>

int main(){
	int n;
	float s[1001] = {0},sum=0,m=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &s[i]);
		if(m < s[i]) m = s[i];
	}
	for(int i=0; i<n; i++)sum += s[i]/m*100;
	printf("%.2f", (sum+m)/n);
	return 0;
}
