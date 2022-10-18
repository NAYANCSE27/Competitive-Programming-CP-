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
    int n,q;
    vector<int>odd,even;
    lli ans=0,od=0,ev=0;

    cin>>n>>q;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x&1)     odd.PB(x),od+=x;
        else        even.PB(x),ev+=x;
    }

    int _1=odd.size();
    int _0=even.size();
    //cin>>q;
    while(q--) {
        int x,y;
        cin>>x>>y;
        if(x&1) {
            od+=(_1*y);
            cout<<od+ev<<endl;
            if(y&1) _1=0,_0=n;
        } else {
            ev+=(_0*y);
            cout<<ev+od<<endl;
            if(y&1) _0=0,_1=n;
        }
    }
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
