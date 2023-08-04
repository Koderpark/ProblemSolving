#include <bits/stdc++.h>
using namespace std;

int je[10] = {0};
int st[10] = {0};

int main(){
	for(int i=0; i<9; i++) cin >> je[i];
	for(int i=0; i<9; i++) cin >> st[i];
	
	int flag1 = false;
	int flag2 = false;
	
	int j=0;
	int s=0;
	for(int i=0; i<9; i++){
		j += je[i];
		if(s < j) flag1 = true;
		
		s += st[i];
		if(j < s && flag1) flag2 = true; 
	}
	
	if(flag2) cout << "Yes";
	else cout << "No";
	return 0;
}
