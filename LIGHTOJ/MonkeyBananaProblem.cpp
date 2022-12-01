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

int out=1;

void testcases() {
    int ara[333][333],dp[333][333],n;
    memset(ara,0,sizeof(ara));
    memset(dp,0,sizeof(dp));

    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) cin>>ara[i][j];
    }
    int ctn=1;
    for(int i=n-1; i>0; i--) {
        for(int j=1; j<=i; j++) cin>>ara[n+ctn][j];
        ctn++;
    }

    dp[1][1]=ara[1][1];
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1)        dp[i][j]+=(dp[i-1][j]+ara[i][j]);
            else if(j==i)   dp[i][j]+=(dp[i-1][j-1]+ara[i][j]);
            else            dp[i][j]+=(max(dp[i-1][j-1],dp[i-1][j])+ara[i][j]);
        }
    }

    ctn=1;
    for(int i=n-1; i>0; i--) {
        for(int j=1; j<=i; j++) {
            dp[n+ctn][j]+=(max(dp[n+ctn-1][j],dp[n+ctn-1][j+1])+ara[ctn+n][j]);
        }
        ctn++;
    }

    cout<<"Case "<<out<<": "<<dp[2*n-1][1]<<endl;
    out++;
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
