#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	scanf("%2d %d %1d %d", &a, &b, &c, &d);
	if(c <= 2){ a += 1900; }
	else a += 2000;
	
	printf("%d %c", 2012-a+1, c%2?'M':'F');
	return 0;
}
