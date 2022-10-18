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
    char c;
    string s;
    cin>>n>>c>>s;
    s+=s;

    //cout<<s<<endl;

    if(c=='g')      cout<<0<<endl;
    else if(c=='y') {
        vector<int>dis;
        for(int i=0; i<2*n; i++) {
            if(s[i]=='y') {
                int ctn=0;
                while(i<2*n&&s[i]!='g') {
                    i++;
                    ctn++;
                }
                dis.PB(ctn);
                //cout<<ctn<<endl;
            }
        }
        //cout<<dis.size()<<endl;
        sort(dis.begin(), dis.end());

        int m=dis.size();
        cout<<dis[m-1]<<endl;
    } else {
        vector<int>dis;
        for(int i=0; i<2*n; i++) {
            if(s[i]=='r') {
                int ctn=0;
                while(i<2*n&&s[i]!='g') {
                    i++;
                    ctn++;
                }
                dis.PB(ctn);
                //cout<<ctn<<endl;
            }
        }
        //cout<<dis.size()<<endl;
        sort(dis.begin(), dis.end());

        int m=dis.size();
        cout<<dis[m-1]<<endl;
    }
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
