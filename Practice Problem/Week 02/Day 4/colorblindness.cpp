#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string r,s;
        cin>>r>>s;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]==r[i]||s[i]=='G'&&r[i]=='B'||s[i]=='B'&&r[i]=='G')
            {
                continue;
            }
            else
            {
                cout<<"NO\n";
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
    }
}