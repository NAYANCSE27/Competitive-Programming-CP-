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

int len(int x) {
    int ctn=0;
    while(x) {
        ctn++;
        x/=10;
    }
    return ctn;
}

void testcases() {
    int n;
    priority_queue<int>pa,pb;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        pa.push(x);
    }
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        pb.push(x);
    }

    int ans=0;
    while(!pa.empty()) {
        int x=pa.top();
        int y=pb.top();

        if(x>y) {
            pa.pop();
            pa.push(len(x));
            ans++;
        }else if(x<y) {
            pb.pop();
            pb.push(len(y));
            ans++;
        }else {
            pa.pop();
            pb.pop();
        }
    }
    cout<<ans<<endl;
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


*/
