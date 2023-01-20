#include <bits/stdc++.h>
using namespace std;
typedef __float128 fl;
typedef long double ld;
set<fl> s;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	cout.precision(10);
	cout << fixed;
	
	int N;
	cin >> N;
	
	while(N--){
		s.clear();
		ld A,B,C,D;
		cin >> A >> B >> C >> D;
	
		for(int i=-1e6; i<=1e6; i+=1){
			if(A*i*i*i + B*i*i + C*i + D == 0){
				s.insert(i);
				break;
			}
		}
		
		B += A*(*s.begin());
		C += B*(*s.begin());
		
		fl inner = B*B-4*A*C;
		
		if(inner >= 0){
			s.insert((-B+sqrt(inner))/(2*A));
			s.insert((-B-sqrt(inner))/(2*A));
		}
	
	
		for(auto it = s.begin(); it!=s.end(); it++){
			cout << (ld)*it << " ";
		}
		cout << "\n";
	}
	return 0;
}
