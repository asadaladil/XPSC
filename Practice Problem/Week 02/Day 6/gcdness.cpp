#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        mx=max(mx,A[i]);
    }
    int ans,x=0;
    for(int i=2;i<=mx;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]%i==0)
            {
                cnt++;
            }
        }
        if(x<cnt)
        {
            x=cnt;
            ans=i;
        }

    }
    cout<<ans;
}