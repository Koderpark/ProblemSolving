#include <bits/stdc++.h>
using namespace std;

int main(){
	double b,n;
	scanf("%lf %lf", &b, &n);
	
	double a = pow(b, 1/n);
	int v = (int)a;
	
	int x = pow(v,n);
	int y = pow(v+1,n);
	if(abs(b-x) > abs(b-y)) printf("%d", v+1);
	else printf("%d", v);
	return 0;
}
