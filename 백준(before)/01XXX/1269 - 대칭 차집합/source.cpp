#include <stdio.h>
#include <set>

using namespace std;

int main(){
	int n,m,tmp,sum=0;
	set<int> s;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		s.insert(tmp);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &tmp);
		if(s.find(tmp) != s.end()){
			sum++;
		}
	}
	printf("%d", n+m-sum*2);
	return 0;
}
