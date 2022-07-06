#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<string,int> vec;
vector<vec> v;

int first(long long int k){ while(k>=10) k/=10; return k; }
bool cmp(vec a, vec b){ return a.first+b.first > b.first+a.first; }

int main(){
	int n,k,f;
	long long int tmp=1,chk=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> k;
		tmp = k;
		f = first(k);
		if(tmp != 0) while(tmp<10000000000LL) tmp = (tmp*10)+f;
		v.push_back({to_string(tmp),k});
	}
	
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<n; i++) chk += v[i].second;
	if(chk) for(int i=0; i<n; i++) cout << v[i].second;
	else cout << "0";
	return 0;
}
