#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<pair<double,pair<int,int>>> v;
int N,M,x,y;

int parent[1234] = {0};
pair<int,int> arr[1234];

double dist(pair<int,int> A, pair<int,int> B){
	long long x = (A.x-B.x);
	long long y = (A.y-B.y);
	return sqrt(x*x + y*y);
}

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b) parent[a] = b;
	return;
}

int main(){
	cout.precision(2);
	cout << fixed;
	
	for(int i=0; i<1234; i++) parent[i] = i;
	
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		cin >> arr[i].x >> arr[i].y;
	}
	
	for(int i=1; i<=N; i++){
		for(int j=i+1; j<=N; j++){
			v.push_back({dist(arr[i],arr[j]),{i,j}});
		}
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<M; i++){
		cin >> x >> y;
		joint(x,y);
	}
	
	double ans = 0;
	int cnt = 1;
	for(auto node : v){
		int A = node.y.x;
		int B = node.y.y;
		
		if(find(A) != find(B)){
			joint(A,B);
			ans += node.x;	
		}
	}
	
	cout << ans;
	return 0;
}
