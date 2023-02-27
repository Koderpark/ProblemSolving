#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int prefix[1234] = {0};

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	for(int i=1; i<=1000; i++){
		for(int j=1; j<=1000; j++){
			if(gcd(i,j) != 1) continue;
			arr[max(i,j)]++;
		}
	}
	
	prefix[1] = 3;
	for(int i=2; i<=1000; i++) prefix[i] = prefix[i-1] + arr[i];
	
	int C;
	cin >> C;
	while(C--){
		int N;
		cin >> N;
		cout << prefix[N] << "\n";
	}
	return 0;
}
