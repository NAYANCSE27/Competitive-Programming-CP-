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
    lli n,ctn=0;
    vector<int>va,vb,vc;
    
    cin>>n;
    vin(va,n);
    vin(vb,n);
    vin(vc,n);

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    sort(vc.begin(), vc.end());

    for(int i=0; i<n; i++) {
        int a=upper_bound(va.begin(), va.end(), vb[i]-1)-va.begin();
        if(va[a]>=vb[i]||a>=n)    a--;
        if(a>=0) {
            int b=lower_bound(vc.begin(), vc.end(),vb[i]+1)-vc.begin();
            if(b<n)     ctn+=((a+1)*(n-b));
        }
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
