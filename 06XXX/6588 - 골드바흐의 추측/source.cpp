#include <bits/stdc++.h>
using namespace std;

int sleve[1234567] = {0};
vector<int> prime;

int main(){
	for(int i=2; i<=1000000; i++){
		if(sleve[i]) continue;
		for(int j=i+i; j<=1000000; j+=i){
			sleve[j] = 1;
		}
		prime.push_back(i);
	}
	
	while(1){
		int n;
		scanf("%d", &n);
		if(n==0) break;
		
		int l = 0;
		while(sleve[n-prime[l]] != 0) l++;
		printf("%d = %d + %d\n", n, prime[l], n-prime[l]);
	}
	return 0;
}
