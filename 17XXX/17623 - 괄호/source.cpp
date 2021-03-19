#include <bits/stdc++.h>
using namespace std;

string cmp(string a, string b,int ptr){
	if(a=="") return b;
	if(b=="") return a;
	if(a.length() != b.length()) return a.length()>b.length()?b:a;
	if(ptr>a.length())           return a;
	if(a[ptr] != b[ptr])         return a[ptr]>b[ptr]?b:a;
	
	return cmp(a, b, ptr+1);
}

string convert(string s){
	string ans;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='1') ans+='(';
		if(s[i]=='2') ans+=')';
		if(s[i]=='3') ans+='{';
		if(s[i]=='4') ans+='}';
		if(s[i]=='5') ans+='[';
		if(s[i]=='6') ans+=']';
	}
	return ans;
}

string dp[12345];

int main(){
	dp[1] = "12";
	dp[2] = "34";
	dp[3] = "56";
	
	//string a,b;
	//cin >> a;
	//cout << cmp(a,b,0);
	
	
	for(int i=4; i<=1000; i++){
		dp[i] = (string)"1"+"2"+dp[i-1];
		for(int j=2; j<i; j++) dp[i] = cmp(dp[i], dp[j]+dp[i-j], 0);
		if(i%2 == 0) dp[i] = cmp(dp[i], "1"+dp[i/2]+"2", 0);
		if(i%3 == 0) dp[i] = cmp(dp[i], "3"+dp[i/3]+"4", 0);
		if(i%5 == 0) dp[i] = cmp(dp[i], "5"+dp[i/5]+"6", 0);
	}
	
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << convert(dp[n])<< "\n";
	}
	return 0;
}
