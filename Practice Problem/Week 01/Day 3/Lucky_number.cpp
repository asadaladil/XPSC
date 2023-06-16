#include<bits/stdc++.h>
using namespace std;
string lucky_number(string s)
{
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            continue;
        }
        else
        {
            return "-1";
        }
    }
    return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int x=0;
    for(int i=a;i<=b;i++)
    {
        string s=to_string(i);
        string r=lucky_number(s);
        if(r=="-1")
        {
            x++;
        }
        else
        {
            cout<<i<<" ";
        }
    }
    if(x==(b-a+1))
    {
        cout<<-1;
    }
}