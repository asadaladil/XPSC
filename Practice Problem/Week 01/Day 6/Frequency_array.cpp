#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<mp[i]<<endl;
    }
}