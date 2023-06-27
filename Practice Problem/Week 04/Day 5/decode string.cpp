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
        r+=(s[0]-'0')+'a'-1;
        int n=s.size();
        for(int i=1;i<n;)
        {
            if(s[i+2]=='0')
            {
                int x=(s[i]-'0')*10+(s[i+1]-'0');
                i+=3;
                r+=('a'+x-1);
            }
            else
            {
                r+=('a'+(s[i]-'0')-1);
                i++;
            }
        }
        cout<<r<<endl;

    }
}