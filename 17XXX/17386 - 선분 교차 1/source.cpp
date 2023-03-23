#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct p{ ll x; ll y; };

void swap(ll *a, ll *b){ ll tmp = *a; *a = *b; *b = tmp; }

int ccw(p A, p B, p C) {
    ll result = (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
    if (result > 0) return 1;
    else if (result < 0) return -1;
    return 0;
}
 
int main() {
    p A, B, C, D;
    
    cin >> A.x >> A.y >> B.x >> B.y;
    cin >> C.x >> C.y >> D.x >> D.y;
	
	int abc = ccw(A,B,C);
	int abd = ccw(A,B,D);
	int cda = ccw(C,D,A);
	int cdb = ccw(C,D,B);
 	
    if(abc*abd <= 0 && cda*cdb <= 0) cout << "1";
    else cout << "0";
    
    return 0;
}
