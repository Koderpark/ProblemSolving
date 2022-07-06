#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll add(ll a, ll b){
	ll tmp = b;
	ll cnt = 0;
	while(tmp){
		tmp /= 10;
		cnt++;
	}
	
	return a*pow(10,cnt) + b;
}

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	cout << add(a,b) + add(c,d);
}
