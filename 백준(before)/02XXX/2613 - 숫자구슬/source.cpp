#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[345] = {0};

vector<int> v;

int search(int s, int e){
	int mid = (s+e)/2;
	if(s >= e) return mid;
	
	int sum = 0;
	int cnt = 0;
	
	//printf("[%d~%d - %d] : ", s,e,mid);
	for(int i=1; i<=N; i++){
		sum += arr[i];
		if(sum > mid){
			//printf("/ ");
			sum = arr[i];
			cnt++;
		}
		//printf("%d ", arr[i]);
	}
	//printf(" - %d\n", cnt);
	
	if(cnt < M){
		return search(s,mid);
	}
	else{
		return search(mid+1,e);
	}
}

int main(){
	int mv = -1;
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
		mv = max(mv, arr[i]);
	}
	
	int sum = 0;
	int cnt = 0;
	int ans = search(mv,30000);
	
	for(int i=1; i<=N; i++,cnt++){
		sum += arr[i];
		if(sum > ans){
			v.push_back(cnt);
			cnt = 0;
			sum = arr[i];
		}
	}
	v.push_back(cnt);
	
	cout << ans << "\n";
	for(int i=0; i<v.size(); i++){
		while(v[i] > 1 && v.size() < M){
			cout << "1 ";
			v[i]--;
			M--;
		}
		cout << v[i] << " ";
	}
	return 0;
}
