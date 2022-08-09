#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=3e5+6;
const int P1=1000000007;

vector<int>pre;

void testcases() {
    int a,b,xr=0,ans=0;
    cin>>a>>b;
    ans=a;
    xr=pre[a-1];
    //cout<<'\t'<<xr<<endl;
    if(xr==b)                 cout<<ans<<endl;
    else if((xr^b) != a)      cout<<ans+1<<endl;
    else                      cout<<ans+2<<endl;
}

int main() {

    fast;
    int tc=1;
    pre.PB(0);
    for(int i=1; i<N; i++)      pre.PB(i^pre[i-1]);
    cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS



*/
