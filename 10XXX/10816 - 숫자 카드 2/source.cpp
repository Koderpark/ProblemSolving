#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, i, tmp;

int main(){
    scanf("%d", &n);

    vector<int> v;
    vector<int>::iterator low;
    vector<int>::iterator high;

    while(n--){ scanf("%d", &tmp); v.push_back(tmp); }
    sort(v.begin(), v.end());

    scanf("%d", &m);
    while(m--){
        scanf("%d", &tmp);
        low =  lower_bound(v.begin(), v.end(), tmp);
        high = lower_bound(v.begin(), v.end(), tmp + 1);

        printf("%lld ", distance(low,high));
    }
    return 0;
}
