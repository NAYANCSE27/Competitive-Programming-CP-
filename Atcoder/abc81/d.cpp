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
    vector<pair<int,int> >va,vb,vc;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x;
        va.PB(MP(x,i));
    }
    vb=va;
    sort(vb.begin(), vb.end());

    int x=vb[0].first;
    int y=vb[n-1].first;

    if(abs(vb[n-1].first)>=abs(vb[0].first)) {
        for(int i=0; i<n; i++) {
            va[i].first+=vb[n-1].first;
            vc.PB(MP(vb[n-1].second+1,i+1));
        }
        for(int i=1; i<n; i++) {
            va[i].first+=va[i-1].first;
            vc.PB(MP(i,i+1));
        }
    }else {
        for(int i=0; i<n; i++) {
            va[i].first+=vb[0].first;
            vc.PB(MP(vb[0].second+1,i+1));
        }
        for(int i=n-2; i>=0; i--) {
            va[i].first+=va[i+1].first;
            vc.PB(MP(i+2, i+1));
        }
    }

    cout<<vc.size()<<endl;
    for(int i=0; i<vc.size(); i++) 
        cout<<vc[i].first<<' '<<vc[i].second<<endl;
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
