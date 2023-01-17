#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=1000001;
const int P1=1000000007;

int dp[N];

void testcases() {
    int n,m;
    vector<int>va;
    cin>>n>>m;
    vin(va,n);

    for(int i=0; i<=m; i++)     dp[i]=P1;
    for(int i=0; i<n; i++)      dp[va[i]]=1;
    for(int i=0; i<n; i++) {
        for(int j=1; j<=m; j++) {
            if(j-va[i]>0)   dp[j]=min(dp[j], (dp[j-va[i]]+1));
        }
    }
    if(dp[m]!=P1)   cout<<dp[m]<<endl;
    else            cout<<-1<<endl;
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


Bitmask/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
