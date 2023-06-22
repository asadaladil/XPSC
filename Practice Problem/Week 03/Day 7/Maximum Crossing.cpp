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
        vector<int>A(n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(A[i]>=A[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}