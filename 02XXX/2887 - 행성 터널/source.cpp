#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#define MAX 100001
#define ll long long int

using namespace std;

struct PLANET{ int idx, x, y, z; };
bool cmpx (PLANET a, PLANET b){ return a.x < b.x; }
bool cmpy (PLANET a, PLANET b){ return a.y < b.y; }
bool cmpz (PLANET a, PLANET b){ return a.z < b.z; }

struct LINE{ int i,j; ll w; bool operator < (const LINE &t) const { return w < t.w; } };

PLANET planet[MAX];
vector<LINE> line;
int parent[MAX];
int n;
ll answer =  0;

int find(int v){ if(parent[v] == v) return v; return parent[v] = find(parent[v]); }

int main(){
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d %d %d", &planet[i].x, &planet[i].y, &planet[i].z);
        parent[i] = planet[i].idx = i;
    }
    
    sort(planet+1, planet+n+1, cmpx); for(int i=1; i<n; i++) line.push_back({planet[i].idx, planet[i+1].idx, abs(planet[i].x-planet[i+1].x)}); 
	sort(planet+1, planet+n+1, cmpy); for(int i=1; i<n; i++) line.push_back({planet[i].idx, planet[i+1].idx, abs(planet[i].y-planet[i+1].y)});
	sort(planet+1, planet+n+1, cmpz); for(int i=1; i<n; i++) line.push_back({planet[i].idx, planet[i+1].idx, abs(planet[i].z-planet[i+1].z)});
	
    sort(line.begin(), line.end());
    
    for(int i=0; i<line.size(); i++){
        int rooti = find(line[i].i);
        int rootj = find(line[i].j);
        if(rooti != rootj){
            parent[rootj] = rooti;
            answer += line[i].w;
        }
    }
    printf("%lld", answer);

    return 0;
}
