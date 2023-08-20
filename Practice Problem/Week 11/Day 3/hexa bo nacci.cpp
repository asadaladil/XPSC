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
#define vary(A,x,y,n) transform(A.begin()+x,A.begin()+y,A.begin()+x,[](int a){return a+n;})
#define vary_perm(x) next_permutation(x.begin(),x.end())
#define yes_or_no cout<<"YES\n":cout<<"NO\n"
#define yess cout<<"YES\n"
#define noo cout<<"NO\n"
#define endl "\n"
#define newl cout<<endl
vector<ll>A(6);
ll mod=10000007;
unordered_map<ll,ll>mp;
ll fn(ll n)
{
    if(mp[n]!=0)
    {
        return mp[n];
    }
    if(n==0){return A[n];}
    if(n==1){return A[n];}
    if(n==2){return A[n];}
    if(n==3){return A[n];}
    if(n==4){return A[n];}
    if(n==5){return A[n];}
    mp[n]=(fn(n-1)%mod+fn(n-2)%mod+fn(n-3)%mod+fn(n-4)%mod+fn(n-5)%mod+fn(n-6)%mod)%mod;
    return mp[n];
}
int main()
{
    _easy_
    int t,i=1;
    cin>>t;
    while(t--)
    {
        int n=6;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        ll x;cin>>x;
        cout<<"Case "<<i<<": ";
        cout<<(fn(x)%mod)<<endl;
        mp.clear();
        i++;
    }
}
