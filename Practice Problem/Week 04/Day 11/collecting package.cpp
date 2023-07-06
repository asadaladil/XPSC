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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>A(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            A.P_B({a,b});
        }
        A_sort(A);
        str r="";
        int x=0,y=0;
        bool flag=true;
        for(auto i:A)
        {
            int dx,dy;
            if(x!=0||y!=0)
            {
                dx=i.first-x;dy=i.second-y;
                x=i.first;y=i.second;
            }
            else
            {
                dx=(i.first-x);
                dy=(i.second-y);
                x=i.first;y=i.second;
            }
            if(dx>=0&&dy>=0)
            {
                for(int j=1;j<=dx;j++)
                {
                    r+='R';
                }
                for(int j=1;j<=dy;j++)
                {
                    r+='U';
                }
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n"<<r<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
}







