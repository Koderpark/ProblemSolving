#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
typedef long long int ll;
typedef long double ld;
typedef double db;

vector<ld> ans;

int main(){
	int n;
	ll a, b, c, d;
	scanf("%d", &n);
	
	while(n--){
		ans.clear();
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		for(ld i=-1000000; i<=1000000; i++) if(a*i*i*i + b*i*i + c*i + d == 0.0){ ans.push_back(i); break; }
		b = a*ans[0]+b;
		c = b*ans[0]+c;
		
		if     (b*b - 4*a*c <  0) printf("%lf\n", (db)ans[0]);
		else if(b*b - 4*a*c == 0){
			ans.push_back(-b/(2*a));
			sort(ans.begin(), ans.end());
			if(ans[0]==ans[1]) printf("%lf\n", (db)ans[0]);
			else				 printf("%lf %lf\n",(db)ans[0], (db)ans[1]);	
			
		}
		else if(b*b - 4*a*c >  0){
			ans.push_back((-b+sqrt(b*b-4*a*c))/(2*a));
			ans.push_back((-b-sqrt(b*b-4*a*c))/(2*a));
			sort(ans.begin(), ans.end());
			if(ans[0]==ans[1]) printf("%lf %lf\n",(db)ans[0], (db)ans[2]);
			else 			 	 printf("%lf %lf %lf\n",(db)ans[0], (db)ans[1], (db)ans[2]);
		}
	}
	return 0;
}
