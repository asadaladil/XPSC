#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    set<string>A;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                if((i+j+k)%10==3)
                {
                    string a1=to_string(i);
                    string a2=to_string(j);
                    string a3=to_string(k);
                    A.insert(a1+a2+a3);
                }
            }
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a%10]++;
        }
        bool flag=true;
        for(auto it:A)
        {
            int x=(it[0]-'0'),y=(it[1]-'0'),z=(it[2]-'0');
            if(mp[x]>0)
            {
                mp[x]--;
                if(mp[y]>0)
                {
                    mp[y]--;
                    if(mp[z]>0)
                    {
                        mp[x]++;
                        mp[y]++;
                        cout<<"YES\n";
                        flag=false;
                        break;
                    }
                    else
                    {
                        mp[y]++;
                        mp[x]++;
                    }
                }
                else
                {
                    mp[x]++;
                }
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
    }
}