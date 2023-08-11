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
#define yes_or_no cout<<"YES\n":cout<<"NO\n"
#define yess cout<<"YES\n"
#define noo cout<<"NO\n"
#define endl "\n"
#define newl cout<<endl
int main()
{
    _easy_
    int t;
    cin>>t;
    while(t--)
    {
        str r;
        cin>>r;
        int b=-1;
        for(int i=r.size()-1;i>=0;i--)
        {
            if(r[i]>='5')
            {
                if(i!=0&&r[i-1]<'9')
                {
                    r[i-1]++;
                }
                b=i;
                r[i]='0';
            }
        }
        if(b==0)
        {
            cout<<1;
            for(int i=0;i<r.size();i++)
            {
                cout<<0;
            }
        }
        else if(b!=-1)
        {
            for(int i=0;i<b;i++)
            {
                cout<<r[i];
            }
            for(int i=b;i<r.size();i++)
            {
                cout<<0;
            }
        }
        else
        {
            cout<<r;
        }
        newl;
    }
}
