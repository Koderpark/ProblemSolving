#include <bits/stdc++.h>
using namespace std;

int win[10] = {0};
int draw[10] = {0};
int lose[10] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T = 4;
	int k;
	
	while(T--){
		memset(win, 0, sizeof(win));
		memset(draw, 0, sizeof(draw));
		memset(lose, 0, sizeof(lose));
		
		int wtotal = 0;
		int dtotal = 0;
		int ltotal = 0;

		for(int i=0; i<18; i++){
			cin >> k;
			if(i%3 == 0) win[i/3] = k;
			if(i%3 == 1) draw[i/3] = k;
			if(i%3 == 2) lose[i/3] = k;
		}
		
		bool flag = true;
		
		for(int i=0; i<6; i++){
			int wsum = 0;
			int dsum = 0;
			int lsum = 0;
			
			for(int j=0; j<6; j++){
				if(i==j) continue;
				wsum += win[j];
				dsum += draw[j];
				lsum += lose[j];
			}
			
			if(win[i]  > wsum) flag = false;
			if(draw[i] > dsum) flag = false;
			if(lose[i] > lsum) flag = false;
			
			if(win[i] + draw[i] + lose[i] != 5) flag = false;
			
			wtotal += win[i];
			dtotal += draw[i];
			ltotal += lose[i];
		}
		
		if(wtotal != ltotal) flag = false;
		if(dtotal % 2 != 0) flag = false;
		
		if(flag) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}
