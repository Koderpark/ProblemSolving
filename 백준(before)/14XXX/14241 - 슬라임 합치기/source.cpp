#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(){
	int N,a;
	int ans = 0;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> a;
		pq.push(a);
	}
	
	while(pq.size() != 1){
		int A = pq.top(); pq.pop();
		int B = pq.top(); pq.pop();
		
		pq.push(A+B);
		ans += A*B;
	}
	cout << ans;
	return 0;
}
