#include <stdio.h>
#include <vector>

using namespace std;

typedef long long int ll;

vector<int> v; // 소수 배열 // 
ll chk[2000002] = {0}; // 아리스토테네스의 체 // 

int prime(ll k){
	for(int i=0; v[i]*v[i]<=k && i<v.size(); i++) if(k%v[i] == 0) return 0;
	return 1;
}

int main(){
	// 전처리 //
	chk[0] = chk[1] = 1;
	for(int i=2; i*i < 2000002; i++)
		if(!chk[i])
			for(int j=i*i; j < 2000002; j+=i)
				chk[j]=1;
	
	for(int i=1; i<2000002; i++)
		if(!chk[i]) 
			v.push_back(i);
	// 전처리 끝 //
	
	int t;
	ll a,b;
	ll tmp;
	scanf("%d", &t);
	while(t--){
		scanf("%lld %lld", &a, &b);
		tmp = a+b;
		
		if(tmp < 4)			puts("NO");  // 3 이하로는 불가능. 
		else if(tmp%2 == 0) puts("YES"); // 골드바흐의 추측.
		else printf("%s\n", prime(tmp-2)?"YES":"NO");
	}
	return 0;
}
