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
    int n;
    cin>>n;
    dp[0]=0;
    for(int i=1; i<=n; i++) dp[i]=P1;
    for(int i=0; i<=n; i++) {
        for(char c:to_string(i)){
            dp[i]=min(dp[i], dp[i-(c-'0')]+1);
        }
    }
    cout<<dp[n]<<endl;
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
