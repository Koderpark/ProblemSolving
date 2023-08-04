#include <bits/stdc++.h>
using namespace std;

int N,M;
int ans = 0;
string s[1234];

void print(){
	for(int i=0; i<N; i++){
		cout << s[i] << "\n";
	}
}

void del_row(){
	for(int i=1; i<N; i++){
		s[i-1] = s[i];
	}
	s[N-1] = "";
	N--;
	return;
}

bool check(){
	unordered_map<string,int> m;
	
	for(int j=0; j<M; j++){
		string tmp = "";
		for(int i=1+ans; i<N; i++){
			tmp += s[i][j];
		}
		//cout << "[" << tmp << "]\n";
		if(m[tmp] != 0) return false;
		m[tmp]++;
	}
	
	return true;
}

int main(){
	string tmp;
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		cin >> s[i];
	}
	
	for(int j=0; j<M; j++){
		for(int i=0; i<N; i++){
			
		}
	}
	
	//while(check()){ans++;}
	
	cout << ans;
	return 0;
}
