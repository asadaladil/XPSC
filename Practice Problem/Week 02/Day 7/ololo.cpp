#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    set<ll>s;
    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        if(s.find(a)!=s.end())
        {
            s.erase(a);
        }
        else
        {
            s.insert(a);
        }
    }
    for(int i:s)
    {
        cout<<i;
    }
}