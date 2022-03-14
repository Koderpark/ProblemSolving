#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
set<ld> s;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	while(N--){
		s.clear();
		ld A,B,C,D;
		cin >> A >> B >> C >> D;
	
		for(ld i=-2e6; i<=2e6; i+=1){
			if(A*i*i*i + B*i*i + C*i + D == 0){
				s.insert(i);
				break;
			}
		}
		
		B += A*(*s.begin());
		C += B*(*s.begin());
		
		ld inner = B*B-4*A*C;
		//cout << "{" << inner << "}";
		if(inner >= 0){
			s.insert((-B+sqrt(inner))/(2*A));
			s.insert((-B-sqrt(inner))/(2*A));
		}
	
	
		for(auto it = s.begin(); it!=s.end(); it++){
			cout << *it << " ";
		}
		cout << "\n";
	}
	return 0;
}
