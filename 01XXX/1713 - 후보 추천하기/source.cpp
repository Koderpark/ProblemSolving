#include <bits/stdc++.h>
using namespace std;

int hit[123] = {0};
int idx[123] = {0};
int n,m,a;
int cnt=0;

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d", &a);
		if(hit[a] != 0) hit[a]++;
		else{
			if(n > cnt){
				hit[a]++;
				idx[a] = i;
				cnt++;
			}
			else{
				int tmp;
				int min = 1234;
				for(int j=1; j<=100; j++){
					if(!hit[j]) continue;
					if(min == hit[j]){ if(idx[j] < idx[tmp]) tmp = j; }
					if(min >  hit[j]){ min = hit[j]; tmp = j; }
				}
				hit[a]++;
				idx[a] = i;
				
				hit[tmp]=0;
				idx[tmp]=0;
			}
		}
	}
	for(int i=1; i<=100; i++) if(hit[i]) printf("%d ", i);
	return 0;
}
