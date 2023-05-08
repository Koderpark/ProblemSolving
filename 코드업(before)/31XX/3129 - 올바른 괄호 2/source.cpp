#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main(){
	bool flag = true;
	string tmp;
	cin >> tmp;
	for(int i=0; i<tmp.length(); i++){
		if(tmp[i] == '(') s.push(1);
		if(tmp[i] == ')'){
			if(s.empty()) flag = false;
			else s.pop();
		}
	}
	if(!s.empty()) flag = false;
	printf("%s", flag?"good":"bad");
	return 0;
}
