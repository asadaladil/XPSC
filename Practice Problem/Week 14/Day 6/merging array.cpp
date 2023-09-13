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
#define Reverse(x) reverse(x.begin(),x.end())
#define Vary(A,x,y,n) transform(A.begin()+x,A.begin()+y,A.begin()+x,[](int a){return a+n;})
#define Vary_perm(x) next_permutation(x.begin(),x.end())
#define yes_or_no cout<<"YES\n":cout<<"NO\n"
#define yess cout<<"YES\n"
#define noo cout<<"NO\n"
#define endl "\n"
#define newl cout<<endl
int main()
{
    _easy_
    int n,m;
    cin>>n>>m;
    vector<ll>A(n),B(m);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }
    vector<ll>C;
    int l=0,r=0;
    while(C.size()<(n+m))
    {
        if(l==n)
        {
            C.P_B(B[r]);
            r++;
        }
        else if(r==m)
        {
            C.P_B(A[l]);
            l++;
        }
        else if(A[l]>B[r])
        {
            C.P_B(B[r]);
            r++;
        }
        else if(A[l]<B[r])
        {
            C.P_B(A[l]);
            l++;
        }
        else
        {
            C.P_B(A[l]);
            C.P_B(B[r]);
            l++;r++;
        }
    }
    for(int i:C)
    {
        cout<<i<<" ";
    }
    // algorithm must be noted.
}
