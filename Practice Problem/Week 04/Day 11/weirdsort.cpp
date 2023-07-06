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
        int n,m;
        cin>>n>>m;
        vector<int>A(n+1),B(n+1),C(m+1);
        for(int i=1;i<=n;i++)
        {
            cin>>B[i];
            A[i]=B[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin>>C[i];
        }
        A_sort(A);
        for(int x=1;x<=n;x++)
        {
            for(int i=1;i<=m;i++)
            {
                int a=C[i];
                if(B[a]>B[a+1])
                {
                    swap(B[a],B[a+1]);
                }
            }
        }
        if(A==B)
        {
            cout<< "YES\n";
        }
        else
        {
            cout<< "NO\n";
        }
    }
}







