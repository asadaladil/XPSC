/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||                                                         ||
||     Rajshahi Unversity of Engineering & Technology      ||
||                                                         ||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||                                                         ||
||                   MD. ASAD-AL-ADIL                      ||
||                                                         ||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 
*/
#include<bits/stdc++.h>
using namespace std;
#define _easy_ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define str string
#define ev(x) x%2==0
#define od(x) x%2==1
#define mod0(x,y) x%y==0 
#define P_B push_back
#define p_b pop_back
#define P_F push_front
#define p_f pop_front
#define pi 3.141592654
int f(int x){if(x==1){return 1;}return x*f(x-1);}
#define __lcm(x,y) (x*y)/__gcd(x,y)
#define A_sort(x) sort(x.begin(),x.end())
#define D_sort(x) sort(x.rbegin(),x.rend())
#define reverse(x) reverse(x.begin(),x.end())
#define endl "\n"
#define newl cout<<endl
map<ll,int>dp;
int oddd(ll n)
{
    ll x=n;
    if(dp[n]!=0)
    {
        return dp[n];
    }
    while(n%2==0)
    {
        n=n/2;
    }
    if(n==1)
    {
        dp[x]=2;
        return dp[x];
    }
    dp[x]=1;
    return dp[x];
}
int main()
{
    _easy_
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        oddd(n)==1?cout<< "YES\n":cout<< "NO\n";
    }
}