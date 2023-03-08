#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int N,L;
pair<int,int> lights[1234];

int main(){
	int a,b,c;
	cin >> N >> L;
	for(int i=0; i<N; i++){
		cin >> a >> b >> c;
		lights[a] = {b,c};
	}
	
	int time = 0;
	for(int i=0; i<L; i++){
		if(lights[i] != (pair<int,int>){0,0}){
			int period = lights[i].x + lights[i].y;
			int tmp = time % period;
			
			if(tmp >= lights[i].x) time++;
			else{
				time += lights[i].x - tmp + 1;
			}
		}
		else{
			time++;
		}
	}
	cout << time;
	return 0;
}
