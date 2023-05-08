#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v;
vector<int> print;

int insert(int s, int e, int k){
	if(s==e){
		v.insert(v.begin()+s, k);
		return 0;
	}
	if(v.size() == 0) v.push_back(k);
	else{
		int mid = (s+e)/2;
		if(v[mid] > k) return insert(s, mid, k);
		else return insert(mid+1, e, k);
	}
}

int main(){
	int t,n,tmp;
	scanf("%d", &t);
	while(t--){
		print.clear();
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &tmp);
			insert(0,i,tmp);
			if(i%2==0) print.push_back(v[i/2]);
		}
		printf("%d\n", print.size());
		for(int i=0; i<print.size(); i++){
			if(i%10 == 0 && i!=0) puts("");
			printf("%d ", print[i]);
		}
		puts("");
	}
	return 0;
} 
