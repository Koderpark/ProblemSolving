#include <stdio.h>
#include <queue>

using namespace std;

queue<pair<int, int>> q;
priority_queue<int> pq;
int t,n,m,pri,count,idx,val;

int main(){
    scanf("%d", &t);
    
    while(t--){
        count = 0;
        while( !q.empty())  q.pop();
        while(!pq.empty()) pq.pop();
        
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; i++){
            scanf("%d", &pri);
            q.push({i, pri});
            pq.push(pri);
        }
        
        while(!q.empty()){
            idx = q.front().first;
            val = q.front().second;
            q.pop();
            if(pq.top() == val) {
                pq.pop();
                count++;
                if (idx == m) {
                    printf("%d\n", count);
                    break;
                }
            }
            else q.push({idx,val});
        }
    }
    return 0;
}
