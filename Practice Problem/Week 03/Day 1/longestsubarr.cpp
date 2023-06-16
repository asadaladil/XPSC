#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>A(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int l=1,r=1;
    int ans=0,sum=A[l];
    while(r<=n)
    {
        if(sum==k)
        {
            ans=max(ans,r-l+1);
            r++;
            sum+=A[r];
        }
        else if(sum>k)
        {
            sum-=A[l];
            l++;
        }
        else
        {
            r++;
            sum+=A[r];
        }

    }
    cout<<ans;
}