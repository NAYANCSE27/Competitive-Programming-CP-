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
    lli a,b,aa=0,bb=0,ctn=0,mid=0;
    cin>>a>>b;
    aa=sqrt(a);
    bb=sqrt(b);

    if(a==b) {
        if(a%aa==0)    cout<<1<<endl;
        else           cout<<0<<endl;
        return;
    }

    if((a%(aa*aa))<aa)               ctn=3*(aa-1)+1;
    else if((a%(aa*aa))<2*aa)        ctn=3*(aa-1)+2;
    else if((a%(aa*aa))==2*aa)       ctn=3*(aa-1)+3;
    else                             ctn=3*(aa-1)+3;

    if((b%(bb*bb))<bb)               mid=3*(bb-1)+1;
    else if((b%(bb*bb))<2*bb)        mid=3*(bb-1)+2;
    else if((b%(bb*bb))==2*bb)       mid=3*(bb-1)+3;
    else                             mid=3*(bb-1)+3;

    //cout<<ctn<<'\t'<<mid<<endl;
    cout<<mid-ctn+1<<endl;
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


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
