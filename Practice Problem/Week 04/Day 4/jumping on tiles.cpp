#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        set<pair<char,int>>A;
        char r=min(s[0],s[n-1]),p=max(s[0],s[n-1]);
        for(int i=0;i<n;i++)
        {
            if(s[i]>=r&&s[i]<=p)
            {
                A.insert({s[i],i+1});
            }
        }
        cout<<p-r<<" "<<A.size()<<endl;
        for(auto i:A)
        {
            cout<<i.second<<" ";
        }
        cout<<endl;
    }
}