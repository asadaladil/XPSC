#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    for(int i=1;i<n;i++)
    {
        ll a;
        cin>>a;
        sum-=a;
    }
    cout<<sum;
}