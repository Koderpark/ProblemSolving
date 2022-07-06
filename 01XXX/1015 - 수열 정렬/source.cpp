#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<int,int>> v;
int arr[1234] = {0};

int main(){
	int n;
	int tmp;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		v.push_back({tmp,i});
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++) arr[v[i].second] = i;
	
	for(int i=0; i<n; i++) printf("%d ", arr[i]);
	return 0;
}
