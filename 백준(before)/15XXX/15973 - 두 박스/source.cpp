#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	
	if(
		(x1 == x4 && y1 == y4) ||
		(x2 == x3 && y1 == y4) ||
		(x1 == x4 && y2 == y3) ||
		(x2 == x3 && y2 == y3)
	){
		cout << "POINT";
		return 0;
	}
	
	if(
		(x1 == x4) ||
		(x2 == x3) ||
		(y1 == y4) ||
		(y2 == y3)
	){
		cout << "LINE";
		return 0;
	}
	
	if(
		(x4 < x1) ||
		(x2 < x3 && ) ||
		(y4 < y1) ||
		(y2 < y3)
	){
		cout << "NULL";
		return 0;
	}
	
	cout << "FACE";
	return 0;
}
