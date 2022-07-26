#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         lli         long long int

using namespace std;

///ISNNJB

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main()
{
    /***freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j,k,len,ctn=0;
    string s;
    cin>>s;
    len = s.length();
    k=len/2;
    if(len%2==0)
    {
        for (i=k-1,j=k; i>=0; i--,j++)
        {
            if(s[i]!=s[j])
                ctn++;
        }
    }
    else
    {
        for (i=k-1,j=k+1; i>=0; i--,j++)
        {
            if(s[i]!=s[j])
                ctn++;
        }
    }
    cout<<ctn<<endl;
    ctn=0;

    return 0;
}
