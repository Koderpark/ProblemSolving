#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int N,tmp;
vector<int> ans;
deque<pair<int,int>> d;

int main(){
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> tmp;
		d.push_back({i+1,tmp});
	}
	
	while(!d.empty()){
		auto k = d.front(); d.pop_front();
		ans.push_back(k.x);
		
		if(k.y > 0){
			k.y--;
			while(k.y){
				d.push_back(d.front());
				d.pop_front();
				k.y--;
			}
		}
		else{
			while(k.y){
				d.push_front(d.back());
				d.pop_back();
				k.y++;
			}
		}
	}
	
	for(auto k : ans) cout << k << " ";
	return 0;
}
