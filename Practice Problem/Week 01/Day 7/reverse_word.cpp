#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    getline(cin,s);
    vector<string>S;
    string r="";
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ')
        {
            S.push_back(r);
            r="";
        }
        else
        {
            r+=s[i];
        }
    }
    S.push_back(r);
    for(int i=S.size()-1;i>=0;i--)
    {
        cout<<S[i];
        if(i>0)
        {
            cout<<" ";
        }
    }
}