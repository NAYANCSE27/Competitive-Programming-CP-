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
    int n,_2=0;
    cin>>n;
    vector<int>ara(n+1,0);

    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        while(x%2==0) {
            _2++;
            x/=2;
        }
        x=i;
        while(x%2==0) {
            ara[i]++;
            x/=2;
        }
    }

    sort(ara.rbegin(), ara.rend());
    int ans=0;
    for(auto x:ara) {
        if(_2>=n)   break;
        ans++;
        _2+=x;
    }

    if(_2<n)    ans=-1;
    cout<<ans<<endl;
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
