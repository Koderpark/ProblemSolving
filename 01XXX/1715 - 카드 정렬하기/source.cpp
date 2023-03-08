#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[123456] = {0};
priority_queue<int, vector<int>, greater<int>> pq;


int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		pq.push(arr[i]);
	}
	
	sort(arr,arr+N);
	int ans = 0;
	
	while(pq.size() > 1){
		int A = pq.top(); pq.pop();
		int B = pq.top(); pq.pop();
		
		pq.push(A+B);
		ans += A+B;
	}
	cout << ans;
	return 0;
}
