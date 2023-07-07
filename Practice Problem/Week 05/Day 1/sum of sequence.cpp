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
int f(int x){if(x==1){return 1;}return x*f(x-1);}
#define __lcm(x,y) (x*y)/__gcd(x,y)
#define A_sort(x) sort(x.begin(),x.end())
#define D_sort(x) sort(x.rbegin(),x.rend())
#define reverse(x) reverse(x.begin(),x.end())
#define endl "\n"
#define newl cout<<"\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<ll>A(8);
        map<ll,int>mp;
        ll mn=1e11;
        for(int i=1;i<=7;i++)
        {
            cin>>A[i];
            mp[A[i]]++;
            mn=min(A[i],mn);
        }
        if(mp[mn]==3)
        {
            cout<<mn<<" "<<mn<<" "<<mn<<endl;
        }
        else if(mp[mn]==2)
        {
            cout<<mn<<" "<<mn<<" "<<A[7]-mn*2<<endl;
        }
        else
        {
            cout<<mn<<" ";
            if(mp[A[2]]==2)
            {
                cout<<A[2]<<" "<<A[2];
            }
            else
            {
                cout<<A[2]<<" "<<A[7]-A[2]-mn;
            }
            newl;
        }

    }
}



