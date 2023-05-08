#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=0; j<n-i; j++) printf(" ");
		for(int j=0; j<2*i-1; j++) printf("*");
	}
	for(int i=n-1; i>=1; i--,puts("")){
		for(int j=0; j<n-i; j++) printf(" ");
		for(int j=0; j<2*i-1; j++) printf("*");
	}
	return 0;
}
