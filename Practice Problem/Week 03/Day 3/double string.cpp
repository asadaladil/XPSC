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
        vector<string>s(n);
        set<string>S;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            S.insert(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<s[i].size()-1;j++)
            {
                string m="",p="";
                for(int k=0;k<=j;k++)
                {
                    m+=s[i][k];
                }
                for(int k=j+1;k<s[i].size();k++)
                {
                    p+=s[i][k];
                }
                if(S.find(m)!=S.end()&&S.find(p)!=S.end())
                {
                    cout<<1;
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}