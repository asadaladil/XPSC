#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll calculateXOR(ll n) 
{
    if (n%4==0) return n;
    if (n%4==1) return 1;
    if (n%4==2) return n+1;
    return 0;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<(calculateXOR(a-1)^calculateXOR(b));
}