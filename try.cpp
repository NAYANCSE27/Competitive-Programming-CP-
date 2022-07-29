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
    int n,m,t[111],l[111],r[111];
    cin>>n>>m;
    for(int i=0; i<n; i++)  cin>>t[i]>>l[i]>>r[i];

    int prev=0,mx=m,mn=m;
    bool flag=true;
    for(int i=0; i<n; i++) {
        mx+=t[i]-prev;
        mn-=t[i]-prev;
        if(mx<l[i]||mn>r[i]) {
            flag=false;
            break;
        }
        mx=min(mx,r[i]);
        mn=max(mn,l[i]);
        prev=t[i];
    }

    if(flag)    cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
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
