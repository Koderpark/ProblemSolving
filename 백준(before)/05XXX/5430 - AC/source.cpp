#include <bits/stdc++.h>
using namespace std;

deque<int> d;

int main(){
	int t;
	char tmp;
	
	scanf("%d", &t);
	
	while(t--){
		d.clear();
		string s,X;
		int n;
		string tmp;
		
		bool isfront = true;
		bool flag = true;
		
		cin >> s >> n >> X;
		for(int i=1; i<X.size(); i++){
			if(X.size() == 2) break;
			if('0' <= X[i] && X[i] <= '9'){ tmp+=X[i]; }
			else{
				d.push_back(atoi(tmp.c_str()));
				tmp.clear();
			}
		}
		
		//for(int i=0; i<=n; i++) printf("[%d] ", d[i]); puts(""); 
		
		for(int i=0; i<s.length(); i++){
			if(s[i] == 'R'){ isfront = !isfront; }
			if(s[i] == 'D'){
				if(d.empty()){ printf("error\n"); flag = false; break;}
				else{
					if(isfront) d.pop_front();
					else        d.pop_back();
				}
			}
		}
		
		if(flag){
			printf("[");
			if(d.empty()){ printf("]\n"); continue;}
			else{
				if(isfront){
					for(int i=0; i<d.size()-1; i++) printf("%d,", d[i]);
					printf("%d]\n", d[d.size()-1]);
				}
				else{
					for(int i=d.size()-1; i>0; i--) printf("%d,", d[i]);
					printf("%d]\n", d[0]);
				}
			}
		}
	}
	return 0;
}
