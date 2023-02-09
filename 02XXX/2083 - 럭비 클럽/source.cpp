#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int age,weight;
	
	while(true){
		cin >> s >> age >> weight;
		if(s == "#" && !age && !weight) break;
		
		if(age>17 || weight >= 80) cout << s << " Senior\n";
		else cout << s << " Junior\n";
	}
	return 0;
}
