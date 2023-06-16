#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>A(n+1);
    unordered_map<int,int>mp;
    int sum=0,ans=0;;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        sum+=A[i];
        if(sum==k)
        {
            ans=max(ans,i+1);
        }
        if(mp.find(sum-k)!=mp.end())
        {
            int p=mp[sum-k];
            ans=max(ans,i-p);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=i;
        }
    }
    cout<<ans;
    
}