#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int arr[1234567] = {0};
int N;
int M;

ll tree(int h){
	ll ret = 0;
	for(int i=0; i<N; i++){
		ret += max(0,arr[i]-h);
	}
	return ret;
}

int search(int s, int e){
	int mid = (s+e)/2;
	ll tmp = tree(mid);
	//printf("[%d %d, %d, %lld]\n", s,e,mid, tmp);
	
	if(s==e) return mid-1;
	
	if(tmp < M) return search(s, mid);
	if(tmp > M) return search(mid+1,e);
	return mid;
	
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	cout << search(0, 1e9);
	return 0;
}
