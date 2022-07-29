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
    int n,p,mid,l,r,ans=0;
    string s;
    cin>>n>>p>>s;
    n--,p--;
    mid=n/2;
    if(p>mid)   p=n-p;
    l=-1;

    for(int i=0; i<=n/2; i++) {
        if(s[i]!=s[n-i]) {
            int diff=abs(s[i]-s[n-i]);
            diff=min(diff,26-diff);
            ans+=diff;
            if(l==-1)   l=i;
            r=i;
        }
    }

    if(ans==0) {
        cout<<ans<<endl;
        return;
    }
    if(p<=l)    ans+=(r-p);
    else if(p>l && p<r) {
        if(p-l<=r-p)    ans+=(p+r-2*l);
        else            ans+=(2*r-p-l);
    }else if(p>=r)      ans+=(p-l);
    cout<<ans<<endl;
}

int main() {

    fast;
    int tc=1;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
