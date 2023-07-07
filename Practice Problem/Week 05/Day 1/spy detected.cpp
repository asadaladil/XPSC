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
        int n;
        cin>>n;
        int a;
        bool flag=true;
        int x,c=0;
        for(int i=1;i<=n;i++)
        {
            int b;
            cin>>b;
            if(flag)
            {
                if(i==1)
                {
                    a=b;
                }
                else if(c!=0)
                {
                    if(a==b)
                    {
                        flag=false;
                        x=2;
                    }
                    else if(b==c)
                    {
                        flag=false;
                        x=1;
                    }
                }
                else if(a==b)
                {
                    continue;
                }   
                else if(a!=b&&i>2&&c==0)
                {
                    x=i;
                    flag=false;
                }
                else if(a!=b&&i<3)
                {
                    c=b;
                }
            }
        }
        cout<<x<<endl;
    }
}