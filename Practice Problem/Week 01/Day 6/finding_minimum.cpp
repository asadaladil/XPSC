#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll>B;
    ll a;
    ll x=1e10;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        x=min(a,x);
        if(i%k==0)
        {
            B.push_back(x);
            x=1e10;
        }
    }
    if(n%k!=0)
    {
        B.push_back(x);
    }
    for(int i:B)
    {
        cout<<i<<" ";
    }
}