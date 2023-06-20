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
        map<int,int>mp;
        int sum=0;
        int a=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            a+=A[i];
            mp[a]=i+1;
        }
        a=0;
        for(int i=n-1;i>=0;i--)
        {
            a+=A[i];
            if(mp[a]!=0&&mp[a]<=i)
            {
                sum=max(sum,mp[a]+(n-(i)));
            }
        }
        cout<<sum<<endl;
    }
}