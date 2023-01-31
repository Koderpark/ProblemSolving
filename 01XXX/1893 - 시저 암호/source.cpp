#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> alphnum;
char numalph[256];

int fail[543210];

string shift(string s, int len){
	int N = s.length();
	string ans = "";
	for(int i=0; i<N; i++){
		ans += numalph[(1+alphnum[s[i]])%len];
	}
	return ans;
}

void pi(string s){
	memset(fail, 0, sizeof(fail));
	int N = s.length();
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1];
		if(s[i] == s[j]) fail[i] = ++j;
	}
	return;
}

int kmp(string s1, string s2){
	int ans = 0;
	pi(s2);
	
	int N = s1.length();
	int M = s2.length();
	
	for(int i=0,j=0; i<N; i++){
		while(j>0 && s1[i] != s2[j]) j = fail[j-1];
		if(s1[i] == s2[j]){
			if(j == M-1){
				ans++;
				j = fail[j];
			}
			else j++;
		}
	}
	
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	while(N--){
		memset(numalph, 0, sizeof(numalph));
		alphnum.clear();
		
		string A,W,S;
		cin >> A >> W >> S;
		for(int i=0; i<A.length(); i++){
			numalph[i] = A[i];
			alphnum[A[i]] = i;
		}
		
		vector<int> V;
		int K = A.length();
		
		for(int i=0; i<K; i++){
			if(kmp(S,W) == 1) V.push_back(i);
			W = shift(W, A.length());
		}
		
		if(V.size() == 0){
			cout << "no solution\n";
		}
		if(V.size() == 1){
			cout << "unique: " << V[0] << "\n"; 
		}
		if(V.size() >= 2){
			cout << "ambiguous:";
			for(auto it : V){
				cout << " " << it;
			}
			cout << "\n";
		}
	}
	return 0;
}
