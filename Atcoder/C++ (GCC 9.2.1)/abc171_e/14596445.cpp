#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         lli         long long int

using namespace std;

///ISNNJB
int ara[200010],brr[100010];

void constructXOR(int n) {
    lli XOR = 0;
    for (int i = 0; i < n; i++)
        XOR ^= ara[i];
    ///cout<<XOR<<endl;

    for (int i = 0; i < n; i++)
        ara[i] = XOR ^ ara[i];
}

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main() {
    /***freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n;
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>ara[i];
    constructXOR(n);

    for (int i = 0; i < n-1; i++)
        cout << ara[i] << " ";
    cout<<ara[n-1]<<endl;

    return 0;
}
