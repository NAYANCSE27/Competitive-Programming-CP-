#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=1000005;
const int P1=1000000007;

int dp[N];

void testcases() {
    int n,m;
    vector<int>va;
    cin>>n>>m;
    vin(va,n);
    memset(dp,0,sizeof(dp));
    dp[0]=1;

    for(int i=1; i<=m; i++) {
        for(int j=0; j<n; j++) {
            if(i-va[j]>=0)  (dp[i]+=dp[i-va[j]])%=P1;
        }
    }
    cout<<dp[m]<<endl;
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
