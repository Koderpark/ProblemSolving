#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,k,a="9999999";
	cin>>s;
	
	k=s;
	sort(k.begin(),k.end());
	
	do{
		if(k>s) a=min(a,k);
	}while(next_permutation(k.begin(),k.end()));
	
	if(a=="9999999") cout<<0;
	else cout<<a;
}
