#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s,r="";
    cin>>s;
    for(int i=0;i<s.size();)
    {
        if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T')
        {
            r+=' ';
            i+=5;
        }
        else
        {
            r+=s[i];
            i++;
        }
    }
    cout<<r;
    
}