#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main(){
    int plus_,minus_;
    int people[11] = {0};
    for(int i=1; i<11; i++){
        scanf("%d %d", &minus_, &plus_);
        people[i] = people[i-1];
        people[i] -= minus_;
        people[i] += plus_;
    }
    sort(people +1, people + 11);
    printf("%d", people[10]);
}

