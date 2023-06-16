#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    vector<ll>odd;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a%2!=0)
        {
            odd.push_back(a);
        }
        else
        {
            sum+=a;
        }

    }
    sort(odd.rbegin(),odd.rend());
    int m=odd.size()%2==0?odd.size():odd.size()-1;
    for(int i=0;i<m;i++)
    {
        sum+=odd[i];
    }
    cout<<sum;

}