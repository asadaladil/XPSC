#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=n*m;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int x;cin>>x;
    mp[x]==0?cout<<"will take number":cout<<"will not take number";
}