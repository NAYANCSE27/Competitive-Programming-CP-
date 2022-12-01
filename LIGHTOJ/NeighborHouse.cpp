#include <bits/stdc++.h>
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

int ctn=1;

void testcases() {
    int n;
    cin>>n;
    vector<int>va[111];
    for(int i=0; i<n; i++) {
        for(int j=0; j<3; j++) {
            int x;
            cin>>x;
            va[i].PB(x);
        }
    }

    lli dp[111][111];
    int ans=0;
    dp[0][1]=dp[0][2]=dp[0][3]=0;
    for(int i=1; i<=n; i++) {
        dp[i][1]=min(dp[i-1][2],dp[i-1][3])+va[i-1][0];
        dp[i][2]=min(dp[i-1][1],dp[i-1][3])+va[i-1][1];
        dp[i][3]=min(dp[i-1][2],dp[i-1][1])+va[i-1][2];
    }

    ans=min(min(dp[n][1],dp[n][2]),dp[n][3]);
    cout<<"Case "<<ctn<<": "<<ans<<endl;
    ctn++;
}

int main() {

    fast;
    int tc=1;
    cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmask/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
