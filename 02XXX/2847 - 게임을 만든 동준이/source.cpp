#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v;

int main(){
	int tmp,n;
	int ans=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	for(int i=n-1; i>=1; i--){
		while(v[i-1]>=v[i]){
			v[i-1]--;
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
