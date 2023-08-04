#include <bits/stdc++.h>
using namespace std;

int line[] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
vector<int> v;
vector<int> v2;

int main(){
	string A,B;
	cin >> A >> B;
	
	for(int i=0; i<A.length(); i++){
		v.push_back(line[A[i]-'A']);
		v.push_back(line[B[i]-'A']);
	}
	
	while(v.size() > 2){
		v2.clear();
		for(int i=1; i<v.size(); i++){
			v2.push_back((v[i-1] + v[i]) % 10);
		}
		v.clear();
		v.assign(v2.begin(), v2.end());
	}
	
	cout << v[0] << v[1];
	return 0;
}
