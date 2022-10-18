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
    int n,ara[33];
    vector<int>va;
    string s;
    memset(ara,0,sizeof(ara));
    map<int,int>mp,mpp;

    cin>>n;
    vin(va,n);
    cin>>s;

    vector<int>vi[111];
    for(int i=0; i<n; i++) {
        int x=va[i];
        int y=s[i]-'a'+1;
        vi[x].PB(y);
    }

    for(int i=1; i<=50; i++) {
        int xx=vi[i].size();
        set<int>si;
        for(int j=0; j<xx; j++)     si.insert(vi[i][j]);
        if(si.size()>1) {
            cout<<"NO"<<endl;
            return;
        }
        si.clear();
    }

    cout<<"YES"<<endl;
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
