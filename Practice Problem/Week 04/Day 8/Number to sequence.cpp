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
#define ll long long int
#define str string
#define ev(x) x%2==0
#define od(x) x%2==1
#define P_B push_back
#define p_b pop_back
#define P_F push_front
#define p_f pop_front
#define pi 3.141592654
#define __lcm(x,y) (x*y)/__gcd(x,y)
#define A_sort(x) sort(x.begin(),x.end())
#define D_sort(x) sort(x.rbegin(),x.rend())
#define reverse(x) reverse(x.begin(),x.end())
#define endl "\n"
#define newl cout<<endl
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b=sqrt(n);
        if(n<4)
        {
            cout<<1<<endl<<n<<endl;
            continue;
        }
        map<ll,vector<ll>>mp;
        if(mp[n].size()!=0)
        {
            for(ll i:mp[n])
            {
                cout<<i<<" ";
            }
            newl;
            continue;
        }
        vector<ll>A;
        for(ll a=2;a<=b;a++)
        {
            ll n2=n;
            vector<ll>B;
            while(1)
            {
                if(n2%a==0&&(n2/a)%a==0)
                {
                    B.P_B(a);
                    n2/=a;
                }
                else
                {
                    B.P_B(n2);
                    break;
                }
            }
            if(B.size()>A.size())
            {
                A=B;
            }
        }
        cout<<A.size()<<endl;
        for(ll i:A)
        {
            cout<<i<<" ";
            mp[n].P_B(i);
        }
        newl;     
    }
}



