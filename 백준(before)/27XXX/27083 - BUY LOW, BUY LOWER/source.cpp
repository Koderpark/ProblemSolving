#include <bits/stdc++.h>
using namespace std;

int arr[5678] = {0};
int tmp[5678] = {0};

vector<int> v;

int main(){
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
		arr[i] *= -1;
	}
	
	for(int i=0; i<N; i++){
		if(!i) v.push_back(arr[i]);
		else{
			if(v.back() < arr[i]){
				v.push_back(arr[i]);
				tmp[i] = v.size();
			}
			else{
				auto it = lower_bound(v.begin(), v.end(), arr[i]);
				*it = arr[i];
				tmp[i] = it-v.begin()+1;
			}
		}
		
		printf("%2d ", tmp[i]);
	}
	
	cout << v.size();
	return 0;
}
