#include <stdio.h>
#include <algorithm>
#include <vector>

#define X first
#define Y second
#define MAX 9223372036854775800LL;

using namespace std;

typedef long long ll;
typedef pair<ll, ll> PAIR;

PAIR point[1000004];
ll n,inputa,inputb;
vector<PAIR> v;
 
ll square(ll a){ return a*a; }
ll length(PAIR a, PAIR b){ return square(a.X - b.X) + square(a.Y - b.Y); }
bool compare(PAIR a, PAIR b) { if (a.Y != b.Y){return a.Y < b.Y;} else{return a.X < b.X;} }

ll solve(ll s, ll e) {
    if (e-s == 1) return MAX;
    
    ll mid = (s+e)/2;
    ll value = min(solve(s,mid), solve(mid,e));
    vector<PAIR> v;
    
    for(int i=s; i<e; i++) if(square(point[i].X-point[mid].X) <= value) v.push_back(point[i]);
    sort(v.begin(), v.end(), compare);
    for(int i=0; i<v.size(); i++) for (int j=i+1; j<v.size() && j<i+7; j++) value = min(value, length(v[i], v[j]));

    return value;
}

int main(void) {
    scanf("%lld", &n);
    for (ll i=0; i<n; i++){ scanf("%lld %lld", &point[i].X, &point[i].Y); }
    sort(point, point + n);
    printf("%lld\n", solve(0LL, n));
	return 0;
}
