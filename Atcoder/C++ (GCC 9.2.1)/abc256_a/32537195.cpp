#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     PB          push_back
#define     MP          make_pair
#define     lli         long long int
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     P1          1000000007
#define     endl        '\n'

lli ara[200200];

void testcases() {
    int n;
    vector<int>va;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        va.PB(x);
        ara[x]++;
    }
    for(int i=0; i<200100; i++)     ara[i+1]+=ara[i];

    lli ans=0;
    for(int i=0; i<n; i++)     ans+=(ara[va[i]-1]*(n-ara[va[i]]));
    cout<<ans<<endl;
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

