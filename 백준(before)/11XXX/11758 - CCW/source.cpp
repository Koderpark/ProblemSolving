#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ccw(int x1,int y1, int x2, int y2, int x3, int y3){
	ll tmp = x1*y2 + x2*y3 + x3*y1;
	tmp   -= y1*x2 + y2*x3 + y3*x1;
	return tmp;
}

int main(){
	int x1,x2,x3;
	int y1,y2,y3;
	
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	
	ll tmp = ccw(x1,y1,x2,y2,x3,y3);
	
	if(tmp > 0) printf("1");
	else if(tmp < 0) printf("-1");
	else printf("0");
	return 0;
}
