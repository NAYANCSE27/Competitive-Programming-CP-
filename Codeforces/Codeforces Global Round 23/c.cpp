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
    vector<lli>va,vb;
    cin>>n;
    for(int i=0; i<n; i++) {
        lli x;
        cin>>x;
        va.PB(x);
    }

    int ind=n;
    for(int i=1; i<n; i++) {
        if(va[i]<va[i-1]) {
            ind=i;
            break;
        }
    }
    //cout<<ind<<endl;

    lli ans=0,j=1;
    for(int i=ind; i<n; i++) {
        while(1) {
            if(va[i]+ans>=va[i-1]) {
                va[i]+=ans;
                break;
            } else {
                ans+=j;
                j++;
                vb.PB(i+1);
            }
            //cout<<vb.size()<<endl;
        }
    }

//    for(int i=0; i<n; i++)  cout<<va[i]<<' ';
//    cout<<endl;

    if(vb.size()!=n) {
        for(int i=vb.size(); i<n; i++) {
            vb.PB(n);
            //va[i]
        }
    }

    for(int i=0; i<n; i++)      cout<<vb[i]<<' ';
    cout<<endl;
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
