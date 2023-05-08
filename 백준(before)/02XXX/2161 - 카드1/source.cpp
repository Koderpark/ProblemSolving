#include <bits/stdc++.h>
using namespace std;

deque<int> d;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	for(int i=1; i<=N; i++) d.push_back(i);
	
	while(d.size() != 1){
		cout << d.front() << " ";
		d.pop_front();
		
		d.push_back(d.front());
		d.pop_front();
	}
	
	cout << d.front();
	return 0;
}
