#include <iostream>
#include <string>
#include <map>

#define fi first
#define se second

using namespace std;

map<string,int> m;

int min(int a, int b){ return a>b?b:a; }

int dis(string a, string b){
	int n = 0;
	for(int i=0; i<4; i++){ n += (a[i] != b[i]); }
	return n;
}

int main(){
	int t;
	int n;
	int val;
	string tmp;
	
	cin >> t;
	while(t--){
		m.clear();
		val = 999;
		
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			if(m.find(tmp) == m.end()) m.insert({tmp,1});
			else m[tmp]++;
		}
		
		for(auto it1=m.begin(); it1 != m.end(); it1++){
			for(auto it2=it1; it2 != m.end(); it2++){
				for(auto it3=it2; it3 != m.end(); it3++){
					it1->se--;
					it2->se--;
					it3->se--;
					
					if(it1->se>=0 && it2->se>=0 && it3->se>=0){
						val = min(val, dis(it1->fi, it2->fi) +
								       dis(it2->fi, it3->fi) +
								       dis(it3->fi, it1->fi));
					}
					it1->se++;
					it2->se++;
					it3->se++;
				}
			}
		}
		cout << val << "\n";
	}
	return 0;
}
