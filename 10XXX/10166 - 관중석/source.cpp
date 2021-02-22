#include <bits/stdc++.h>
using namespace std;

set<double> s;

int main(){
	int d1, d2;
	scanf("%d %d", &d1, &d2);
	
	for(int i=d1; i<=d2; i++){
		for(int j=1; j<=i; j++){
			s.insert((double)j/i);
		}
	}
	
	printf("%d", s.size());
	return 0;
}
