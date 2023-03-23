#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C,D;
	
	cin >> A >> B >> C >> D;
	
	int b = B/D;
	int c = C/D;
	
	cout << min(A, b*c);
	return 0;
}
