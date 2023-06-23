#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>A(a),B(b);
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>B[i];
        }
        sort(A.rbegin(),A.rend());
        sort(B.rbegin(),B.rend());
        ll ans=0;
        int n=min(a,b);
        for(int i=0;i<n;i++)
        {
            if(A[i]>=B[i]*c)
            {
                ans+=B[i]*c;
            }
            else
            {
                ans+=A[i];
            }
        }
        cout<<ans<<endl;
    }
}