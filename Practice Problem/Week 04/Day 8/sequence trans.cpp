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
        vector<int>A;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int a;cin>>a;
            if(i>1&&A.back()==a)
            {
                continue;
            }
            A.P_B(a);
            mp[a]++;
        }
        int x=A.size(),y=10000000;
        if(x==1)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            for(int i:A)
            {
                y=min(y,(mp[i]+1-(A.front()==i)-(A.back()==i)));
            }
        }
        cout<<y<<endl;
    }

}



