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
    lli n,_0=0,_1=0;
    vector<int>zrr,onn;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++) {
        //cout<<i<<'\t'<<s[i]<<endl;
        if(s[i]=='0') {
            _0++;
            int ctn=1;
            while(i+1<n&&s[i+1]=='0') {
                i++;
                _0++;
                ctn++;
            }
            zrr.PB(ctn);
        } else {
            _1++;
            int ctn=1;
            while(i+1<n&&s[i+1]=='1') {
                i++;
                _1++;
                ctn++;
            }
            onn.PB(ctn);
        }
    }
    sort(onn.begin(), onn.end());
    sort(zrr.begin(), zrr.end());
//    cout<<zrr[_0]<<endl;
//    cout<<onn[_1]<<endl;
    //cout<<_0<<'\t'<<_1<<'\t'<<on[_1-1]<<'\t'<<zr[_0-1]*endl;
    int a=zrr.size();
    int b=onn.size();
    lli a1=0,a2=0,a3=0;

    a1=_0*_1;
    if(b>0) a2=onn[b-1]*onn[b-1];
    if(a>0) a3=zrr[a-1]*zrr[a-1];

    cout<<max(max(a1,a2),a3)<<endl;
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