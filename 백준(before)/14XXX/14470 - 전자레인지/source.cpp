#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	if(a < 0)  cout << d + (-c * a) + (e * b);
	if(a > 0) cout << e * (b-a);
	if(a == 0) cout << d + e*b;
	return 0;
}
