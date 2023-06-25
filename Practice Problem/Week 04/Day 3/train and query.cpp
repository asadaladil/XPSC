#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        map<ll,ll>mp1,mp2;
        for(int i=1;i<=a;i++)
        {
            ll x;
            cin>>x;
            mp1[x]==0?mp1[x]=i:mp2[x]=i;
        }
        while(b--)
        {
            ll x,y;
            cin>>x>>y;
            if(mp1[x]==0||mp1[y]==0)
            {
                cout<<"NO\n";
                continue;
            }
            if(mp1[x]<mp1[y]||mp1[x]<mp2[y])
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}