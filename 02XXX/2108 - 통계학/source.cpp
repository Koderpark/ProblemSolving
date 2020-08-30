#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> vec;
vector<int> vec2(8001, 0);
int n, tmp, a, b=0, maxv=0;
bool isSecond = false;

int maxf(int a, int b){ return a>b?a:b; }

int main(){
    scanf("%d", &n);
    vec.assign(n,0);
    for(int i=0; i<n; i++){
        scanf("%d", &vec[i]);
        a += vec[i];
        tmp = (vec[i] <= 0) ? abs(vec[i]) : vec[i] + 4000;
        vec2[tmp]++;
        maxv = maxf(maxv, vec2[tmp]);
    }
    
    sort(vec.begin(), vec.end());

    for(int i=-4000; i<=4000; i++){
        tmp = i<=0 ? abs(i) : i+4000;
        if(vec2[tmp] == maxv){
            b = i;
            if(isSecond) break;
            isSecond = true;
        }
    }

    printf("%d\n", (int)round((double)a/n));
    printf("%d\n", vec[round(n/2)]);
    printf("%d\n", b);
	printf("%d\n", vec[vec.size()-1] - vec[0]);
	return 0;
}
