#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

int main(){
	int N,K,a;
	
	cin >> N;
	while(N--){
		cin >> K;
		if(!K){
			if(!pq.empty()){
				cout << pq.top() << "\n";
				pq.pop();
			}
			else{
				cout << -1 << "\n";
			}
		}
		else{
			for(int i=0; i<K; i++){
				cin >> a;
				pq.push(a);
			}
		}
	}
	return 0;
}
