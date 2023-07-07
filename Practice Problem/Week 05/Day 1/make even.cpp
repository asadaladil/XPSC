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
        if(ev(n))
        {
            cout<<0<<endl;
            continue;
        }
        str s=to_string(n);
        int x=s.size();
        int b=0;
        for(int i=0;i<x;i++)
        {
            int a=s[i]-'0';
            if(od(a))
            {
                b++;
            }
        }
        if(x==b)
        {
            cout<<-1<<endl;
            continue;
        }
        int a=s[0]-'0';
        b=s[x-1]-'0';
        ev(a)&&od(b)?cout<<1:cout<<2;
        newl;
    }
}



