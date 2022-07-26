#include <bits/stdc++.h>
#include <list>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=2e5+6;
const int P1=1000000007;

/// Articulation Bridge
/// Call findBridge() to find the articulation bridge

const int NODE = 2e5; /// Maximum no of node (1 based indexing)

vector<int> G[NODE];
int disc[NODE], low[NODE], vis[NODE], par[NODE],ctn=0;

struct Bridge{
    int Time = 0;

    Bridge():Time(0) {}
    void clear(){
        for(int u = 0;u<NODE;u++){
            G[u].clear();
            disc[u] = low[u]  = vis[u] = 0;
            par[u] = -1;
        }
    }
    void tarjan(int u) {
        disc[u] = low[u] = ++Time;
        vis[u] = 1;

        for (int i = 0; i < (int) G[u].size(); i++) {
            int v = G[u][i];
            if (vis[v] == 0) {
                par[v] = u;
                tarjan(v);
                low[u] = min(low[v], low[u]);
                if (low[v] > disc[u]) { /// u-v is a bridge
                    /// Do whatever you like now with it...
                    ctn++;
                }
            } else if(v != par[u]) {
                low[u] = min(disc[v], low[u]);
            }
        }
    }
    void findBridge(int N) {
        for (int i = 1; i <= N; i++) {
            if (vis[i] == 0) {
                tarjan(i);
            }
        }
    }
}bridge;


void testcases() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++) {
        int x,y;
        cin>>x>>y;
        G[x].PB(y);
        G[y].PB(x);
    }

    ctn=0;
    bridge.findBridge(m);
    cout<<ctn<<endl;
}

int main() {

    fast;
    int tc=1;
    //cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS



*/

