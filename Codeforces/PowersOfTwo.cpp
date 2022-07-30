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
    lli n;
    vector<lli>va,vb;
    map<lli,lli>mp;
    
    mp.clear();
    for(int i=0; i<60; i++)     vb.PB(1LL<<i);
    cin>>n;

    for(int i=0; i<n; i++) {
        lli x;
        cin>>x;
        va.PB(x);
    }

    lli ctn=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=30; j++) {
            ctn+=(mp[vb[j]-va[i]]);
        }
        mp[va[i]]++;
    }
    cout<<ctn<<endl;
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
