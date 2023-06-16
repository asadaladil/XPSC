#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto it:mp)
    {
        if(it.second%2!=0)
        {
            cout<<"Lucky";
            break;
        }
        else
        {
            cout<<"Unlucky";
            break;
        }
    }
}