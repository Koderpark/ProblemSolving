#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

stack<pair<int,int>> s;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,a,b,c,score=0;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> a;
		if(a == 1){
			cin >> b >> c;
			s.push({b,c});
		}
		if(!s.empty()){
			auto k = s.top(); s.pop();
			k.y--;
			if(k.y == 0) score += k.x;
			else s.push(k);
		}
	}
	cout << score;
	return 0;
}
