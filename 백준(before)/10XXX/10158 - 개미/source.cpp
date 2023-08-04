#include <bits/stdc++.h>
using namespace std;

int main(){
	int w,h;
	int p,q;
	int t;
	cin >> w >> h;
	cin >> p >> q;
	cin >> t;
	
	int dx = (p+t)/w;
	int nx = (p+t)%w;
	
	int dy = (q+t)/h;
	int ny = (q+t)%h;
	
	if(dx%2 == 1) nx = w-nx;
	if(dy%2 == 1) ny = h-ny;
	
	cout << nx << " " << ny;
	
	return 0;
}
