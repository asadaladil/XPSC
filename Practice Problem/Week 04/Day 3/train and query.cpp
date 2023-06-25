#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    ll n=1e9;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll A[n];
        for(int i=1;i<=a;i++)
        {
            ll x;
            cin>>x;
            A[x]=i;
        }
        while(b--)
        {
            ll x,y;
            cin>>x>>y;
            if(x<y&&x!=0&&y!=0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<< "NO\n";
            }
        }
    }
}