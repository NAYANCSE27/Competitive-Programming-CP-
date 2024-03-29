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

int compute(int n) {
    if(dp[n]!=0)    return dp[n];
    for(int i=1; i<=6; i++) {
        if(n-i>=0)  {
            dp[n]+=compute(n-i);
            dp[n]%=P1;
        }
    }
    return dp[n];
}

void testcases() {
    int n;
    cin>>n;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    cout<<compute(n)<<endl;
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