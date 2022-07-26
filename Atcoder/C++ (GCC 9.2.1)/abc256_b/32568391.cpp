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
    int n;
    vector<pair<int,int> >va,vb;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        va.PB(MP(x,y));
    }
    sort(va.begin(), va.end());

    int l=va[0].first,r=va[0].second;
    for(int i=0; i<n-1; i++) {
        if(r>=va[i+1].first)
            r=max(r,max(va[i].second, va[i+1].second));
        else{
            vb.PB(MP(l,r));
            l=va[i+1].first;
            r=va[i+1].second;
        }
        //cout<<l<<'\t'<<r<<endl;
    }
    vb.PB(MP(l,r));

    for(int i=0; i<vb.size(); i++)
        cout<<vb[i].first<<' '<<vb[i].second<<endl;
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

