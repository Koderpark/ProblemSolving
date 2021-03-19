#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
struct POS{ int x; int y; };// 가입순서 - 나이 - 이름 
vector<POS> v; 

bool compare(POS a, POS b){
	if(a.y != b.y) return a.y < b.y;
	else return a.x < b.x;
}

int main(){
	int n;
	scanf("%d", &n);
	v.resize(n);
	for(int i=0; i<n; i++) scanf("%d %d",&v[i].x, &v[i].y);
	
	sort(v.begin(), v.end(), compare);
	
	for(int i=0; i<n; i++) printf("%d %d\n", v[i].x, v[i].y);
	return 0;
}
