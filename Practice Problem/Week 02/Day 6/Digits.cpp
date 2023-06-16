#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,b;
    cin>>n>>b;
    string s="";
    while(n!=0)
    {
        ll a=n%b;
        n=n/b;
        s+=(a+'0');
    }
    cout<<s.size();

}