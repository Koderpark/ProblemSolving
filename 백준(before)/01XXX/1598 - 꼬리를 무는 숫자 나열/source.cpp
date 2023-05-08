#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	
	a--;
	b--;
	
	int ax = a%4;
	int ay = a/4;
	
	
	int bx = b%4;
	int by = b/4;
	
	cout << abs(ax-bx) + abs(ay-by);
	return 0;
}
