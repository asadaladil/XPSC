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
    int n,q;
    for(int i=1;i>0;i++)
    {
        cin>>n>>q;
        if(n==0&&q==0)
        {
            break;
        }
        vector<int>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cout<<"CASE# "<<i<<":"<<endl;
        while(q--)
        {
            int a;
            cin>>a;
            int lb=0,up=n;
            int mid=(lb+up)/2;
            int b=0;
            while(1)
            {
                if(A[mid]<a)
                {
                    lb=mid;
                    mid=(lb+up)/2;
                    if(b!=mid)
                    {
                        b=mid;
                    }
                    else
                    {
                        cout<<a<<" not found";
                        break;
                    }
                }
                else if(A[mid]>a)
                {
                    up=mid;
                    mid=(lb+up)/2;
                    if(b!=mid)
                    {
                        b=mid;
                    }
                    else
                    {
                        cout<<a<<" not found";
                        break;
                    }
                }
                else if(A[mid]==a)
                {
                    cout<<a<<" found at "<<mid+1;
                    break;
                }
            }
            newl;
        }
    }
}
