#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
int visit[12345] = {0};

int clocknum(int k){
	int a = k/1000;
	int b = (k/100)%10;
	int c = (k/10)%10;
	int d = k%10;
	
	int tmp = 10000;
	tmp = min(tmp, a*1000 + b*100 + c*10 + d);
	tmp = min(tmp, b*1000 + c*100 + d*10 + a);
	tmp = min(tmp, c*1000 + d*100 + a*10 + b);
	tmp = min(tmp, d*1000 + a*100 + b*10 + c);
	
	return tmp;
}

int main(){
	int a,b,c,d,k;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int val = a*1000+b*100+c*10+d;
	    val = clocknum(val);
	
	for(int i=1111; i<=9999; i++){
		if(i%10 == 0 || (i/10)%10 == 0 || (i/100)%10 == 0 || i/1000 == 0) continue;
		
		k = clocknum(i);
		if(!visit[k]){
			v.push_back(k);
			visit[k] = 1;
		}
	}
	
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++) if(v[i] == val) printf("%d", i+1);
	return 0;
}
