#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        multiset<int>m;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            char r;
            cin>>r;
            if(r=='L')
            {
                ll a=(n-1-i)-i;
                m.insert(-a);
                sum+=i;
            }
            else
            {
                ll a=i-(n-1-i);
                m.insert(-a);
                sum+=(n-1-i);
            }
        }
        for(int i:m)
        {
            i*=-1;
            if(i>0)
            {
                sum+=i;
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}