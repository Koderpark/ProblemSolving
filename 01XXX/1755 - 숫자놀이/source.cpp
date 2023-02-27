#include <bits/stdc++.h>
using namespace std;

string st_arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
map<string,int> m;
vector<string> v;

string in_to_st(int N){
	string ret = st_arr[N%10];
	if(N >= 10) ret = st_arr[N/10] + " " + ret;
	return ret;
}


int main(){
	int N,M;
	string tmp;
	
	cin >> N >> M;
	
	for(int i=N; i<=M; i++){
		tmp = in_to_st(i);
		v.push_back(tmp);
		m[tmp] = i;
	}
	
	sort(v.begin(), v.end());
	
	int cnt = 0;
	for(auto i : v){
		cout << m[i] << " ";
		cnt++;
		if(cnt%10 == 0) cout << "\n";
	}
	return 0;
}
