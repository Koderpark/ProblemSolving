#include <stdio.h>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int,int> a, pair<int,int> b){ return a.second<b.second; }
vector<pair<int,int>> v;

int main(){
	int tmp;
	int sum = 0;
	
	for(int i=0; i<8; i++){
		scanf("%d", &tmp);
		v.push_back({tmp,i+1});
		sum+=tmp;
	}
	
	sort(v.begin(), v.end());
	sort(v.begin()+3, v.end(), compare);
	for(int i=0; i<3; i++) sum-=v[i].first;
	
	printf("%d\n", sum);
	for(int i=3; i<8; i++) printf("%d ", v[i].second);
	return 0;
}
