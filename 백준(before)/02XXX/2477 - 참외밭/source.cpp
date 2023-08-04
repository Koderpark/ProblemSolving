#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<pair<int,int>> v;
int cnt[10] = {0};

vector<int> large;
vector<int> small;

int idx(int k){
	if(k<0) return k+6;
	return k%6;
}

int main(){
	int N;
	int a,b;
	
	int large = 1;
	int small = 1;
	
	cin >> N;
	
	for(int i=0; i<6; i++){
		cin >> a >> b;
		v.push_back({a,b});
		cnt[a]++;
	}
	
	for(int i=0; i<6; i++){
		if(v[idx(i-1)].x == v[idx(i+1)].x){
			small *= v[i].y;
		}
		else if(cnt[v[i].x] == 1){
			large *= v[i].y;
		}
	}
	
	cout << (large - small) * N;
	return 0;
}
