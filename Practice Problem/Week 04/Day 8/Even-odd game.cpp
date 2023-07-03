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
        int n;
        cin>>n;
        ll ans=0;
        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        D_sort(A);
        for(int i=0;i<n;i++)
        {
            if(ev(i)&&ev(A[i]))
            {
                ans+=A[i];
            }
            else if(od(i)&&od(A[i]))
            {
                ans-=A[i];
            }
        }
        if(ans==0)
        {
            cout<<"Tie";
        }
        else
        {
            ans<0?cout<<"Bob":cout<<"Alice";
        }
        newl;
    }
}



