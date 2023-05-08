#include <stdio.h>

int main(){
	int a,b,c;
	float d;
	scanf("%d %d", &a, &b);
	d=a;
	for(int i=0; i<b; i++){
		scanf("%d", &c);
		d+=d*c/100;
	}
	printf("%.0f\n%s", d-a, d-a==0?"same":d-a>0?"good":"bad");
	return 0;
}
