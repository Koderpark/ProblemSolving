#include <bits/stdc++.h>
using namespace std;

int diff[3456] = {0};

int main(){
	int N,a,b,c;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d %d:%d", &a, &b, &c);
		int time = b*60+c;
		if(a==1) diff[time]++;
		if(a==2) diff[time]--;
	}
	
	int team1 = 0;
	int team2 = 0;
	int now = 0;
	
	for(int i=0; i<2880; i++){
		now += diff[i];
		
		if(now > 0) team1++;
		if(now < 0) team2++;
	}
	
	printf("%02d:%02d\n", team1/60, team1%60);
	printf("%02d:%02d\n", team2/60, team2%60);
	return 0;
}
