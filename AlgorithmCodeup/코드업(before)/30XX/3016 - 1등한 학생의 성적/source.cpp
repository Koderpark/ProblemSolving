#include <bits/stdc++.h>
using namespace std;

struct st{
	string name;
	int s1;
	int s2;
	int s3;
}arr[123];

int main(){
	int n;
	cin >> n;
	struct st maxv;
	for(int i=0; i<n; i++){
		cin >> arr[i].name >> arr[i].s1 >> arr[i].s2 >> arr[i].s3;
		
		if(maxv.s1 < arr[i].s1){
			maxv = arr[i];
		}
	}
	
	int cnt2=0, cnt3=0;
	for(int i=0; i<n; i++){
		if(arr[i].s2 > maxv.s2)cnt2++;
		if(arr[i].s3 > maxv.s3)cnt3++; 
	}
	cout << maxv.name << " " << cnt2+1 << " " << cnt3+1;
	return 0;
}
