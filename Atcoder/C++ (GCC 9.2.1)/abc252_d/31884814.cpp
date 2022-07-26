#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     PB          push_back
#define     MP          make_pair
#define     lli         long long int
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     P1          1000000007
#define     endl        '\n'



void testcases() {
    int n,k,ara[111];
    vector<pair<int,int> >vii;
    vector<int>va;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vii.PB(MP(x,i+1));
    }
    memset(ara,0,sizeof(ara));
    for(int i=0; i<k; i++) {
        int x;
        cin>>x;
        ara[x]++;
    }
    sort(vii.begin(), vii.end());

    for(int i=n-1; i>=0; i--) {
        //cout<<vii[i].first<<'\t'<<vii[i].second<<endl;
        if(vii[i].first==vii[n-1].first) {
            if(ara[vii[i].second]>0) {
                cout<<"Yes"<<endl;
                return;
            }
        }else   break;
    }
    cout<<"No"<<endl;
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

