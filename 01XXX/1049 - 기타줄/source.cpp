#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> v1;
vector<int> v2;

int min(int a, int b){ return a>b?b:a; }

int main(){
	int n,m;
	int a,b;
	int ans = 0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		v1.push_back(a);
		v1.push_back(b*6);
		v2.push_back(b);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	while(n>=6){ n-=6; ans+=v1[0]; }
	
	printf("%d", ans + min(v1[0], n*v2[0]));
	return 0;
}
