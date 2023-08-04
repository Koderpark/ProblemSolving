#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fibo[1234567] = {0};

int main(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i=2; i<1234567; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
		fibo[i] %= 1000000007;
	}
	
	int N;
	cin >> N;
	cout << fibo[N];
	return 0;
}
