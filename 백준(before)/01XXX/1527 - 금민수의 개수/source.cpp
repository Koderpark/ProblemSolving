#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int,int> m;

void make_num(ll k){
	if(k > 1000000000) return;
	m[k] = 1;
	
	make_num(k*10+4);
	make_num(k*10+7);
	return;
}

int main(){
	make_num(0);
	
	int A,B;
	cin >> A >> B;
	
	
	int a=0;
	int b=0;
	for(auto k : m){
		if(k.first < A) a++;
		if(k.first <= B) b++; 
	}
	cout << b-a;
	return 0;
}
