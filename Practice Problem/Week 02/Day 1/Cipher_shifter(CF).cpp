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
        char c=s[0];
        for(int i=1;i<a;i++)
        {
            if(c==s[i])
            {
                r+=c;
                c=s[i+1];
                i++;
            }
        }
        cout<<r<<endl;
    }
}