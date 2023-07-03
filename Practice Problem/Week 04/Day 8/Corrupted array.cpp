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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>B(n+2);
        ll mx=-1000;
        ll sum=0;
        for(int i=0;i<n+2;i++)
        {
            ll a;cin>>a;
            B[i]=a;
            mx=max(mx,a);
            sum+=a;
        }
        sum-=mx;
        A_sort(B);
        bool flag=true;
        for(int i=0;i<n+1;i++)
        {
            if((sum-B[i])==mx)
            {
                flag=false;
                for(int j=0;j<n+1;j++)
                {
                    if(i==j)
                    {
                        continue;
                    }
                    cout<<B[j]<<" ";
                }
                cout<<endl;
                break;
            }
        }
        if(flag)
        {
            cout<<-1<<endl;
        }
    }
}
