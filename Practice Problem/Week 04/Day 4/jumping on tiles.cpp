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
        vector<int>ans;
        map<char,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=s[0]&&s[i]<=s[n-1]||s[i]<=s[0]&&s[i]>=s[n-1]&&s[0]>s[n-1])
            {
                mp[s[i]].push_back(i+1);
            }
        }
        int x=s[0]<=s[n-1]?1:-1;
        for(char r=s[0];r!=s[n-1]+x;r+=x)
        {
            for(auto it:mp[r])
            {
                ans.push_back(it);
            }
        }
        cout<<abs(s[n-1]-s[0])<<" "<<ans.size()<<endl;
        for(int it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}