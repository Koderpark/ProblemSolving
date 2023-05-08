#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cnt=0;
	cin >> N;
	N = 1000 - N;
	
	while(N>=500){ N -= 500; cnt++; }
	while(N>=100){ N -= 100; cnt++; }
	while(N>=50){ N -= 50; cnt++; }
	while(N>=10){ N -= 10; cnt++; }
	while(N>=5){ N -= 5; cnt++; }
	while(N>=1){ N --; cnt++; }
	
	cout << cnt;
	return 0;
}
