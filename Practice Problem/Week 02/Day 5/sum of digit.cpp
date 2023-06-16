#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    int a=0,ans=0;
    while(s.size()!=1)
    {
        for(int i=0;i<s.size();i++)
        {
            a+=s[i]-'0';
        }
        ans++;
        s=to_string(a);
        a=0;
    }
    cout<<ans;
}