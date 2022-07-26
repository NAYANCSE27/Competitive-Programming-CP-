#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         ll          long long
#define         S           stack
#define         V           vector
#define         Q           queue
#define         SE          set
#define         ST          string

using namespace std;

int main()
{
    string s,t;
    int i,ctn=0;
    cin>>s>>t;
    for (i=0; i<3; i++)
    {
        if(s[i]==t[i])
            ctn++;
    }
    cout<<ctn<<endl;
    return 0;
}

