#include <bits/stdc++.h>
using namespace std;

int num[256] = {0};
int str[256] = {0};

int main(){
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		if(k == 0) num[' ']++;
		if(1 <=k && k<=26) num['A'+k-1]++;
		if(27<=k && k<=52) num['a'+k-27]++;
	}
	
	string s;
	cin.ignore();
	getline(cin, s);
	
	for(auto c : s){ str[c]++; }
	
	for(int i=0; i<256; i++){
		if(num[i] != str[i]){
			cout << "n";
			return 0;
		}
	}
	cout << "y";
	return 0;
}
