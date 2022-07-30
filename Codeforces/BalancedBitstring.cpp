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
    string s;
    int n,m,_0=0,_1=0;
    cin>>n>>m>>s;
    bool flag=true;

    for(int i=0; i<m; i++) {
        int ctn=-1;
        for(int j=i; j<n; j+=m) {
            if(s[j]!='?') {
                if(ctn!=-1&&s[j]-'0'!=ctn) {
                    cout<<"NO"<<endl;
                    return;
                }
                ctn=s[j]-'0';
            }
        }
        if(ctn==0)          _0++;
        else if(ctn==1)     _1++;
    }

    if(max(_0,_1)>m/2) {
        cout<<"NO"<<endl;
        return;
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


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


1
80 2
????????0???0?0???0?0?0?0???0?0???0?????0?0???0???0?????0?????????0???0???0?0???

*/
