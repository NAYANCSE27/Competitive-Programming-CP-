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
    int n;
    vector<int>va,vb;
    cin>>n;
    vin(va,n);
    vb=va;
    sort(vb.begin(), vb.end());

    int ctn=0;
    for(int i=0; i<n; i++) {
        if(va[i]!=vb[i])
            ctn++;
    }
    if(ctn==2||ctn==0)  cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
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

