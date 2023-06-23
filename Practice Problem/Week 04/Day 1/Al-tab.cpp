#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    vector<string>S;
    map<string,int>mp;
    int x=0;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        S.push_back(s);
    }
    reverse(S.begin(),S.end());
    for(int i=0;i<S.size();i++)
    {
        if(mp[S[i]]==0)
        {
            string r=S[i];
            int l=r.size();
            cout<<r[l-2]<<r[l-1];
            mp[r]=1;
        }

    }
}