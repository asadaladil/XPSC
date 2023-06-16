#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    int j=0;
    while(r[j]=='0')
    {
        r[j]='A';
        j++;
    }
    if(r==s)
    {
        cout<<s<<"\nYES";
    }
    else
    {
        for(int i=0;i<r.size();i++)
        {
            if(r[i]!='A')
            {
                cout<<r[i];
            }
        }
        cout<<"\nNO";
    }
}