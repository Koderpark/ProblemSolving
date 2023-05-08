#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> q;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t,n;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(s == "push"){ cin >> n; q.push(n); }
		if(s == "pop"){
			if(q.empty()){ cout << "-1\n"; }
			else{ cout << q.front() << "\n"; q.pop(); }
		}
		if(s == "size"){ cout << q.size() << "\n"; }
		if(s == "empty"){ cout << q.empty() << "\n"; }
		if(s == "front"){
			if(q.empty()){ cout << "-1\n"; }
			else{ cout << q.front() << "\n"; }
		}
		if(s == "back"){
			if(q.empty()){ cout << "-1\n"; }
			else{ cout << q.back() << "\n"; }
		}
	}
	return 0;
}
