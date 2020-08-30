#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string s;
string tmp;
string chk;
vector<int> vec;

string add(int k){
	if(k==1)   return tmp;
	if(k%2==0) return add(k/2)+add(k/2);
	else	   return add(k/2)+add(k/2)+tmp;
}

int main(){
	while(1){
		vec.clear();
		cin>>s;
		if(s==(string)".") break;
		for(int i=1; i*i<=s.length(); i++) if(s.length()%i==0){ vec.push_back(i); vec.push_back(s.length()/i); } // 약수 벡터 추가 
		
		sort(vec.begin(), vec.end());
		
		for(int i=0; i<vec.size(); i++){
			chk.clear();
			tmp = s.substr(0,vec[i]);
			if(add(s.length()/vec[i]) == s){ printf("%d\n", s.length()/vec[i]); break; }
		}
	}
	return 0;
}
