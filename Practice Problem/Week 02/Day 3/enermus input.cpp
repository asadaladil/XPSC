#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a%k==0)
        {
            sum++;
        }
    }
    cout<<sum;
}