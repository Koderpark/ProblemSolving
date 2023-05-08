#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int n = a%b;
		a = b;
		b = n;
	}
	return a;
}

int main(){
	int a,b;
	int c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int x,y,z;
	
	x = a*d;
	y = c*b;
	z = b*d;
	
	int tmp = gcd(x+y,z);
	printf("%d %d", (x+y)/tmp, z/tmp);
	return 0;
}
