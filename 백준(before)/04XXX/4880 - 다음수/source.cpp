#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin >> a >> b >> c;
		if(!a && !b && !c) break;
		
		if(b*2 == a+c) cout << "AP " << c+(b-a) << "\n";
		if(b*b == a*c) cout << "GP " << c*(b/a) << "\n";
	}
	return 0;
}
