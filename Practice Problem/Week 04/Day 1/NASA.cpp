#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<ll>S;
void pali_num()
{
    for(int i=0;i<=90000;i++)
    {
        string r,s;
        r=to_string(i);
        s=r;
        reverse(s.begin(),s.end());
        if(s==r)
        {
            S.insert(i);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    pali_num();
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        set<ll>A;
        map<ll,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            A.insert(x);
            mp[x]++;
        }
        for(auto i:A)
        {
            for(auto it:S)
            {
                int k=i^it;
                if(A.find(k)!=A.end()&&k>=i)
                {
                    if(it==0)
                    {
                        int m=(mp[i]*(mp[i]+1))/2;
                        ans+=m;
                    }
                    else
                    {
                        ans+=mp[i];
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
