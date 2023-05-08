#include <stdio.h>

int main(){
	int t,x1,y1,r1,x2,y2,r2,radius,distance;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		distance = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		radius = r1+r2;
		radius *= radius;
		if(distance==0 && r1==r2)  puts("-1");
		else if(distance == (r1-r2)*(r1-r2) || distance == radius) puts("1");
		else if(distance < radius && (r1-r2)*(r1-r2) < distance) puts("2");
		else if(distance < radius) puts("0");
		else if(distance > radius) puts("0");
	}
	return 0;
}
