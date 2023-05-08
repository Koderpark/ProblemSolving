#include <bits/stdc++.h>
using namespace std;

int arr[256] = {0};

int main(){
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		arr[s[i]]++;
	}
	
	for(int i='a'; i<='z'; i++){
		cout << arr[i] << " "; 
	}
	return 0;
}
