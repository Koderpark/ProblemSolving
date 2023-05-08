#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char s1[256] = {0};
char s2[256] = {0};

int abs(int k){return k>0?k:-k;}

bool chk(){
	int v1=0,v2=0,sum=0;
	for(int i=0; i<=256; i++){
		v1 += s1[i];
		v2 += s2[i];
		sum += abs(s2[i]-s1[i]);
	}
	if(sum <= 2 && abs(v1-v2) <= 1) return true;
	else return false;
}

int main(){
	int n;
	int ans=0;
	string s;
	
	cin >> n;
	cin >> s;
	for(int i=0; i<s.length(); i++){ s1[s[i]]++; }
	
	for(int i=1; i<n; i++){
		cin >> s;
		memset(s2, 0, sizeof(s2));
		for(int i=0; i<s.length(); i++) s2[s[i]]++;
		if(chk()) ans++;
	}
	
	cout << ans;
	return 0;
}
