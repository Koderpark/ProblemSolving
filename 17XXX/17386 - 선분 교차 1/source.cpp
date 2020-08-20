#include<stdio.h>
 
using ll = long long int;

struct p{ ll x; ll y; };

void swap(ll *a, ll *b){ ll tmp = *a; *a = *b; *b = tmp; }

ll ccw(p A, p B, p C) {
    ll result = (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
    if (result > 0) return 1;
    else if (result < 0) return -1;
    return 0;
}
 
int main() {
    p A, B, C, D;
 	
    scanf("%d %d %d %d", &A.x, &A.y, &B.x, &B.y);
    scanf("%d %d %d %d", &C.x, &C.y, &D.x, &D.y);
 
 	ll a = A.x;
	ll b = B.x;
	ll c = C.x;
	ll d = D.x;
 	
    if(ccw(A,B,C)*ccw(A,B,D)==0 && ccw(C,D,A)*ccw(C,D,B)==0) {
        if (a > b) swap(&a, &b);
        if (c > d) swap(&c, &d);
        
        if (a<=d && c<=d) puts("1");
        else			  puts("0");
    }
    else if(ccw(A, B, C)*ccw(A, B, D)<=0 && ccw(C, D, A)*ccw(C, D, B)<=0) puts("1");
    else puts("0");
    
    return 0;
}
