#include <bits/stdc++.h>
using namespace std;

struct student{
	int score;
	int num;
	string name;
};

bool cmp(student a, student b){
	if(a.score != b.score) return a.score > b.score;
	return a.num < b.num;
}

vector<student> v;

int main(){
	int n,m;
	int a;
	string s;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		cin >> s >> a;
		v.push_back({a,i,s});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(int i=0; i<m; i++){
		cout << v[i].name << "\n";
	}
	return 0;
}
