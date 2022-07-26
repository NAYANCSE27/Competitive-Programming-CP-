#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j=0,len;
    cin>>s;
    len=s.size();
    for (i=0; i<len; i++)
    {
        if (i%2==0)
        {
            if (s[i]=='L')
            {
                j=1;
                break;
            }
        }
        else
        {
            if (s[i]=='R')
            {
                j=1;
                break;
            }
        }
    }
    if (j==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
