#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        vector<ll>A;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a==0)
            {
                continue;
            }
            A.push_back(a);
            sum+=abs(a);
        }
        ll term=0;
        for(int i=0;i<A.size();i++)
        {
            if(i==0)
            {
                if(A[i]<0)
                {
                    term++;
                }
            }
            else if(A[i]<0)
            {
                if(A[i-1]<0)
                {
                    continue;
                }
                else
                {
                    term++;
                }
            }
        }
        cout<<sum<< " "<<term<<endl;
 
    }
}