#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	
	vector< pair<int, int> > v(t);
	
	for(int i=0; i<t; i++) scanf("%d %d", &v[i].first, &v[i].second);
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<t; i++) printf("%d %d\n", v[i].first, v[i].second);
	
}
