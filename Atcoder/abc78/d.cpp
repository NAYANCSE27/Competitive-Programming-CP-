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


void testcases() {
    int n,xx,yy;
    vector<int>va;
    cin>>n>>xx>>yy;
    vin(va,n);

    if(n==1) {
        int ans=abs(va[0]-yy);
        cout<<ans<<endl;
    }else {
        int x=abs(yy-va[n-1]);
        int y=abs(va[n-1]-va[n-2]);
        int ans=max(x,y);
        cout<<ans<<endl;
    }
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
