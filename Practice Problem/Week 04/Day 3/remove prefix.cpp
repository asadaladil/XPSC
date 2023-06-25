#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        int n;
        cin>>n;
        vector<int>A(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        bool flag=true;
        for(int i=n;i>=1;i--)
        {
            if(mp[A[i]])
            {
                cout<<i<<endl;
                flag=false;
                break;
            }
            mp[A[i]]++;
        }
        if(flag)
        {
            cout<<0<<endl;
        }
    }
}