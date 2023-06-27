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
        map<int,vector<int>>mp;
        set<int>S;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            S.insert(a);
            mp[a].push_back(i);
        }
        string s;
        cin>>s;
        bool flag=true;
        for(auto it:S)
        {
            int m=1;
            char r;
            for(int i:mp[it])
            {
                if(m==1)
                {
                    r=s[i];
                    m++;
                    continue;
                }
                if(s[i]!=r)
                {
                    cout<<"NO\n";
                    flag=false;
                    break;
                }
            }
            if(!flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }


    }
}