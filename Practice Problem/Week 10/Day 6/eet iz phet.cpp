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
unordered_map<char,ll>mp;
const int mod=1e9+7;
void change()
{
    for(char k='a';k<='z';k++)
    {
        mp[k]=k-'a'+1;
    }
}
ll Hash(str r)
{
    int n=r.size();
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll x=pow(31,i+1)%;
        ll y=mp[r[i]];
        sum+=(x*y);
    }
    return sum;
}

int main()
{
    //_easy_
    unordered_map<ll,int>mp;
    //int n;
    //cin>>n;
    change();
    str r;
    cin>>r;
    int a=0;
    do {
        ll s=Hash(r);
        mp[s]=1;
        a++;
        //cout<<s;newl;
        //cout<<r;newl;
    } while (vary_perm(r));
    cout<<mp.size()<<" "<<a;
    /*int m;
    cin>>m;
    while(m--)
    {
        str r;
        cin>>r;
        mp[Hash(r)]?yes_or_no;
    }*/
}
