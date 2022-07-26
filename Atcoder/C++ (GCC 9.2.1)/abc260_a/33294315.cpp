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
    int n,ara[10];
    vector<int>va;
    cin>>n;
    vin(va,n);
    memset(ara,0,sizeof(ara));
    int total=0,ctn=0;

    for(int i=0; i<n; i++) {
        ara[0]=1;
        for(int j=3; j>=0; j--) {
            if(ara[j]>0&&j+va[i]<=3) {
                ara[j]=0;
                ara[j+va[i]]=1;
            } else if(ara[j]>0&&j+va[i]>3) {
                ctn++;
                ara[j]=0;
            }
        }
//        cout<<i<<'\t';
//        for(int j=0; j<4; j++)  cout<<ara[j]<<' ';
//        cout<<endl;
    }
    cout<<ctn<<endl;
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

