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


void testcases() {
    lli n,cx,cy,r;
    cin>>n>>cx>>cy>>r;
    lli rr=r*r;

    lli ctn=0;
    while(n--) {
        lli x,y;
        cin>>x>>y;
        lli m=(cx-x)*(cx-x)+(cy-y)*(cy-y);
        if(m<=rr)   ctn++;
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


Bitmask/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
