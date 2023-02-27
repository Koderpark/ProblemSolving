#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b) return gcd(b,a%b);
	return a;
}

int main(){
	int N,M;
	cin >> N >> M;
	cout << M - gcd(N,M);
	return 0;
}
