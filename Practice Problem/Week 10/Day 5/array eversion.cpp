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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>A(n);
        //map<int,int>mp,mp2;
        int mx=-100;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            mx=max(mx,A[i]);
        }
        /*if(mp[mx]==n||mx==A[n-1])
        {
            cout<<0;newl;continue;
        }
        int f=0,g;
        for(auto it:mp)
        {
            mp2[it.first]=n-f;
            f+=it.second; // boro soman koto gula ache ta ber korar upay.........
            if(it.first<mx)
            {
                g=it.first;
            }
        }*/
        int mn=0,f=0;
        for(int i=n-1;i>=0;i--)
        {
            if(A[i]==mx)
            {
                break;
            }
            else if(f<A[i])
            {
                mn++;
                f=A[i];
            }
        }
        cout<<mn;
        newl;
        /*for(auto it:mp2)
        {
            cout<<it.second<<" ";
        }*/
    }
}
