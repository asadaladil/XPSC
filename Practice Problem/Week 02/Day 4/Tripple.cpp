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
        map<int,int>mp;
        int a=-1;
        for(int i=1;i<=n;i++)
        {
            int b;
            cin>>b;
            mp[b]++;
            if(mp[b]>=3)
            {
                a=b;
            }
        }
        cout<<a<<endl;
    }
}