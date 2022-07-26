#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         ll          long long
#define         ST          stack
#define         V           vector
#define         Q           queue
#define         S           set
#define         M           map

using namespace std;

///ISNNJB
int ara[100010];

int main()
{
    ll int a,b,k,mid;
    cin>>a>>b;
    mid=a+b;
    if(mid%2==0)
        cout<<mid/2<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
