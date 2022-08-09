#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=3e5+6;
const int P1=1000000007;

vector<int>pre;

void testcases() {
    string s;
    vector<int>va;
    cin>>s;
    for(int i=0; i<4; i++) {
        int x=s[i]-'0';
        va.PB(x);
    }
    
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<2; k++) {
                int ans=0;
                if(i==0) {
                    if(j==0) {
                        if(k==0) {
                            int x=va[0]+va[1]+va[2]+va[3];
                            if(x==7) {
                                cout<<va[0]<<'+'<<va[1]<<'+'<<va[2]<<'+'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }else {
                            int x=va[0]+va[1]+va[2]-va[3];
                            if(x==7) {
                                cout<<va[0]<<'+'<<va[1]<<'+'<<va[2]<<'-'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }
                    }else {
                        if(k==0) {
                            int x=va[0]+va[1]-va[2]+va[3];
                            if(x==7) {
                                cout<<va[0]<<'+'<<va[1]<<'-'<<va[2]<<'+'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }else {
                            int x=va[0]+va[1]-va[2]-va[3];
                            if(x==7) {
                                cout<<va[0]<<'+'<<va[1]<<'-'<<va[2]<<'-'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }
                    }
                }else {
                    if(j==0) {
                        if(k==0) {
                            int x=va[0]-va[1]+va[2]+va[3];
                            if(x==7) {
                                cout<<va[0]<<'-'<<va[1]<<'+'<<va[2]<<'+'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }else {
                            int x=va[0]-va[1]+va[2]-va[3];
                            if(x==7) {
                                cout<<va[0]<<'-'<<va[1]<<'+'<<va[2]<<'-'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }
                    }else {
                        if(k==0) {
                            int x=va[0]-va[1]-va[2]+va[3];
                            if(x==7) {
                                cout<<va[0]<<'-'<<va[1]<<'-'<<va[2]<<'+'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }else {
                            int x=va[0]-va[1]-va[2]-va[3];
                            if(x==7) {
                                cout<<va[0]<<'-'<<va[1]<<'-'<<va[2]<<'-'<<va[3]<<"=7"<<endl;
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
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
