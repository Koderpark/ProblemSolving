#include <bits/stdc++.h>
using namespace std;

int mx_x = 0;
int mx_y = 0;
int mn_x = 0;
int mn_y = 0;
int dir = 0;
int x = 0;
int y = 0;

int main(){
	int N;
	cin >> N;
	while(N--){
		mx_x = mx_y = mn_x = mn_y = x = y = 0;
		dir = 1;
		
		string s;
		cin >> s;
		
		for(int i=0; i<s.length(); i++){
			if(s[i] == 'F'){
				switch(dir){
					case 1: x++; break;
					case 2: y++; break;
					case 3: x--; break;
					case 4: y--; break;
				}
			}
			
			if(s[i] == 'B'){
				switch(dir){
					case 1: x--; break;
					case 2: y--; break;
					case 3: x++; break;
					case 4: y++; break;
				}
			}
			
			if(s[i] == 'L'){
				dir++;
				if(dir == 5) dir = 1;
			}
			
			if(s[i] == 'R'){
				dir--;
				if(dir == 0) dir = 4;
			}
			
			mx_x = max(mx_x, x);
			mx_y = max(mx_y, y);
			mn_x = min(mn_x, x);
			mn_y = min(mn_y, y);
		}
		
		cout << (mx_x-mn_x) * (mx_y-mn_y) << "\n";
	}
}
