#include <bits/stdc++.h>
using namespace std;

string arr[123];
int N;

int main(){
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	int x=0;
	int y=0;
	int streak;
	
	for(int i=0; i<N; i++){
		streak = 0;
		for(int j=0; j<N; j++){
			if(arr[i][j] == 'X'){
				if(streak >= 2) x++;
				streak = 0;
			}
			if(arr[i][j] == '.') streak++;
		}
		if(streak >= 2) x++;
	}
	
	for(int i=0; i<N; i++){
		streak = 0;
		for(int j=0; j<N; j++){
			if(arr[j][i] == 'X'){
				if(streak >= 2) y++;
				streak = 0;
			}
			if(arr[j][i] == '.') streak++;
		}
		if(streak >= 2){
			y++;
		}
	}
	
	cout << x << " " << y;
	return 0;
}
