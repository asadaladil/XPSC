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

int GCD(vector<int>A)
{
    int a=A[0];
    int x=A.size();
    for(int i=1;i<x;i++)
    {
        a=__gcd(a,A[i]);
    }
    return a;
}
int main()
{
    _easy_
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        str r;
        cin>>r;
        map<char,int>mp;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(mp[r[i]]==0)
            {
                if(y>0)
                {
                    x++;
                    y=0;
                }
                x++;
                mp[r[i]]++;
            }
            else
            {
                y++;
            }
        }
        if(y>0)
        {
            x++;
        }
        x<n?yes_or_no;
        // not accepted.
    }
}
