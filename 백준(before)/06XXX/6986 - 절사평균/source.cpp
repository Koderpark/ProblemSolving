#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	cout << fixed;
	cout.precision(2);
	
	int N, K;
	double f;
	cin >> N >> K;
	
	for(int i=0; i<N; i++){
		cin >> f;
		v.push_back((int)(f*1000));
	}
	
	sort(v.begin(), v.end());
	
	int ans1 = 0;
	int ans2 = 0;
	
	for(int i=0; i<N; i++){
		if(K<=i && i<N-K){
			ans1 += v[i];
			ans2 += v[i];
		}
		else{
			if(i<K) ans2 += v[K];
			if(N-K<=i){
				ans2 += v[N-K-1];
			}
		}
	}
	
	int a1 = ans1/(N-2*K);
	int a2 = ans2/N;
	
	if(a1%10 >= 5) a1 += 10-(a1%10);
	if(a2%10 >= 5) a2 += 10-(a2%10);

	cout << (double) a1/1000 << "\n";
	cout << (double) a2/1000 << "\n";
	return 0;
}
