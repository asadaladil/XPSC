#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
    getchar();
    while(t--)
    {
        string s;cin>>s;
        for(int i=0;i<3;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
            }
        }
        string r="yes";
        r==s?cout<<"YES\n":cout<<"NO\n";
    }
}