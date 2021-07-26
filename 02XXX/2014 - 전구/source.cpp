#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int prime[123] = {0};
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
	int k;
	int n;
	scanf("%d %d", &k, &n);
	for(int i=0; i<k; i++){ scanf("%d", &prime[i]); pq.push(prime[i]); }
	
	for(int i=0; i<n-1; i++){
		int now = pq.top(); pq.pop();
		for(int j=0; j<k; j++){
			ll val = (ll)now * prime[j];
			if(val <= 2147483647) pq.push(val);
		}
		while(pq.top() == now) pq.pop();
	}
	printf("%d", pq.top());
	return 0;
}
