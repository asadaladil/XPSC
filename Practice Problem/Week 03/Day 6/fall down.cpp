#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        string s[r];
        for(int i=0;i<r;i++)
        {
            cin>>s[i];
        }
        for(int i=r-1;i>=0;i--)
        {
            for(int j=0;j<c;j++)
            {
                if(s[i][j]=='.')
                {
                    for(int k=i-1;k>=0;k--)
                    {
                        if(s[k][j]=='*')
                        {
                            s[i][j]='*';
                            s[k][j]='.';
                            break;
                        }
                        else if(s[k][j]=='o')
                        {
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            cout<<s[i]<<endl;
        }
    }
}