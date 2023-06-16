#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s,r;
    cin>>s>>r;
    int n= s.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=r[i])
        {
            ans++;
        }
    }
    cout<<ans;
}