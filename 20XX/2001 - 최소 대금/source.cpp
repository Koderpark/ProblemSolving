#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int pasta[3] = {0};
	int juice[2] = {0};
	
	for(int i=0; i<3; i++) scanf("%d", &pasta[i]);
	for(int i=0; i<2; i++) scanf("%d", &juice[i]);
	
	sort(pasta, pasta+3);
	sort(juice, juice+2);
	
	printf("%.1f", (double)(pasta[0]+juice[0])*1.1);
	return 0;
}
