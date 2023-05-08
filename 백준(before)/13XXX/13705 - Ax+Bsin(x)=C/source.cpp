#include <bits/stdc++.h>
#define SMALL 0.000001
using namespace std;
typedef long double ld;

ld a,b,c;
ld mid;
ld val;

int cnt = 10000;

/*ld binary(ld s, ld e){
	mid = (s+e)/2;
	val = a*mid + b*(ld)sin(mid);
	
	cnt--;
	if(!cnt) return mid;
	//cout << "[" << s <<" " << e << "]\n";
	
	if(val > c) return binary(s, mid);
	else		 return binary(mid,e);
}*/

int main(){
	cout.precision(40);
	cout << fixed;
	
	cin >> a >> b >> c;
	
	ld s = c-b;
	ld e = c+b;
	ld mid;
	
	while(cnt--){
		mid = (s+e)/2;
		val = a*mid + b*sin(mid);
		
		if(val > c) e = mid;
		else		s = mid;
	}
	cout << mid;
	return 0;
}
