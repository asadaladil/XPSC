#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b;
    cin>>a>>b;
    ll sum=1;
    while(a<b)
    {
        a*=2;
        if(a<=b)
        {
            sum++;
        }
    }
    cout<<sum;
}