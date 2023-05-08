#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int arr[87654] = {0};

int main(){
	int N;
	long long ans = 0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<N; i++){
		while(!s.empty() && s.top() <= arr[i]){ s.pop(); }
		ans += s.size();
		s.push(arr[i]);
	}
	
	cout << ans;
	return 0;
}
