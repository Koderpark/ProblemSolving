#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int main(){
	int n, w, x, y, p1x, p1y, p2x, p2y, dis=0;
	vector<int> v;
	scanf("%d", &n);
	scanf("%d", &w);
	p1x = p1y = 1;
	p2x = p2y = 2;
	for(int i=0; i<w; i++){
		scanf("%d %d", &x, &y);
		if(abs(x-p1x) + abs(y-p1y) < abs(x-p2x) + abs(y-p2y)){
			dis += abs(x-p1x) + abs(y-p1y);
			p1x = x;
			p1y = y;
			v.push_back(1);
		}else{
			dis += abs(x-p2x) + abs(y-p2y);
			p2x = x;
			p2y = y;
			v.push_back(2);
		}
	}
	printf("%d\n", dis);
	for(int i=0; i<v.size(); i++) printf("%d\n", v[i]);
	return 0;
}
