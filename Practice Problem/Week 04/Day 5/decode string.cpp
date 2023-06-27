#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s,r="";
        cin>>s;
        int n=s.size();
        for(int i=n-1;i>=0;)
        {
            if(s[i]=='0')
            {
                int x=(s[i-2]-'0')*10+(s[i-1]-'0')-1;
                i-=3;
                r+=('a'+x);
            }
            else
            {
                r+=('a'+(s[i]-'0')-1);
                i--;
            }
        }
        reverse(r.begin(),r.end());
        cout<<r<<endl;

    }
}