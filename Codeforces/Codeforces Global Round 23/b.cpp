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
    int n,k;
    cin>>n;
    vector<int>va,vb;
    vin(va,n);
    vb=va;
    sort(vb.begin(), vb.end());

    if(va==vb)      cout<<0<<endl;
    else {
        int ara[N];
        vector<int>vaa;
        for(int i=n-1; i>=0; i--) {
            if(va[i]==0)    vaa.PB(i);
            ara[i]=va[i];
        }

        int ctn=0,xx=0;
        for(int i=0; i<n; i++) {
            if(va[i]==1) {
                if(xx<vaa.size()&&i<vaa[xx]) {
                    //cout<<i<<endl;
                    ara[xx]=1;
                    xx++;
                    ctn++;
                }
            }
        }
        cout<<ctn<<endl;
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
