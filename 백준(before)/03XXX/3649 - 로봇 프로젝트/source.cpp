#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<int> v;
bool flag = false;

int main(){
	int X,N,l;
	while(cin >> X){
		cin >> N;

		v.clear();
		flag = false;
		
		X *= 10000000;
		for(int i=0; i<N; i++){
			cin >> l;
			v.push_back(l);
		}
		
		sort(v.begin(), v.end());
		
		for(int i=0; i<N; i++){
			int tmp = X-v[i];
			int idx = lower_bound(v.begin(), v.end(), tmp) - v.begin();
			
			if(i != idx && v[idx] == tmp){
				flag = true;
				pair<int,int> p = {min(v[i],X-v[i]), max(v[i],X-v[i])};
				cout << "yes " << p.x << " " << p.y << "\n";
				break;
			}
		}
		
		if(!flag) cout << "danger\n";
	}
	return 0;
} 
