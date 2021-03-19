#include <stdio.h>
#include <vector>
#include <algorithm>

#define INF 1e9;

using namespace std;

int arr[123][123];
vector<int> t1,t2;


int min(int a, int b){ return a>b?b:a; }
int abs(int k){ return k>0?k:-k; }

int main(){
	int n;
	int ans = INF;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	vector<int> team(n);
	for(int i=0; i<n/2; i++) team[n-i-1] = 1;
	
	do{
		t1.clear();
		t2.clear();
		for(int i=0; i<n; i++){
			if(!team[i]) t1.push_back(i+1);
			else t2.push_back(i+1);
		}
		
		int s1=0, s2=0;
		for(int i=0; i<t1.size(); i++){
			for(int j=0; j<t2.size(); j++){
				if(i!=j){
					s1 += arr[t1[i]][t1[j]];
					s2 += arr[t2[i]][t2[j]];
				}
			}
		}
		ans = min(ans, abs(s1-s2));
	}while(next_permutation(team.begin(),team.end()));
	
	printf("%d", ans);
	return 0;
}
