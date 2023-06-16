#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b;
    cin>>a>>b;
    vector<ll>A(a);
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    sort(A.rbegin(),A.rend());
    ll x=0,y=0;
    for(int i=0;i<b;i++)
    {
        y+=A[i];
        x=max(x,y);
    }
    cout<<x;
}