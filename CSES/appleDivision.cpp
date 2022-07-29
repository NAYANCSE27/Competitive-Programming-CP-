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
    lli n,total=0;
    vector<int>va;
    cin>>n;
    for(int i=0; i<n; i++) {
        lli x;
        cin>>x;
        total+=x;
        va.PB(x);
    }

    lli a=0,b=0;
    sort(va.begin(), va.end());
    a=va[n-1];
    for(int i=n-2; i>=0; ) {
        if(b<=a){
            while (b<=a&&i>=0){
                b+=va[i];
                i--;
            }
        }else {
            while (a<=b&&i>=0){
                a+=va[i];
                i--;
            }
        }
        cout<<i<<'\t'<<a<<'\t'<<b<<endl;
    }
    //cout<<a<<'\t'<<b<<endl;
    cout<<abs(a-b)<<endl;
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
