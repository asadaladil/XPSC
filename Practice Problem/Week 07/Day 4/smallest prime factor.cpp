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
#define yes_or_no cout<<"YES\n":cout<<"NO\n"
#define yess cout<<"YES\n"
#define noo cout<<"NO\n"
#define endl "\n"
#define newl cout<<endl
bool is_pm(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(mod0(n,i))
        {
            return false;
        }
    }
    return true;
}
int is_prime(int n)
{
    for(int i=2;i<=sqrt(n)+1;i++)
    {
        if(mod0(n,i)&&is_pm(i))
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    //_easy_
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(ev(x))
        {
            cout<<ceil(float((y-x))/2)+1;
        }
        else
        {
            int a=is_prime(x);
            if(a==0)
            {
                x*=2;
                if(x>=y)
                {
                    cout<<1;
                }
                else
                {
                    cout<<ceil(float((y-x))/2)+1;
                }
            }
            else
            {
                x+=a;
                if(x>=y)
                {
                    cout<<1;
                }
                else
                {
                    cout<<ceil(float((y-x))/2)+1;
                }
            }
        }
        newl;
    }
}
