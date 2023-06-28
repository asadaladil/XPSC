#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    map<char,int>mp;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int n1=s1.size(),n2=s2.size();
        mp['S']=-1;mp['M']=5;mp['L']=10;
        char r=s1[n1-1],p=s2[n2-1];
        int x=(n1)*mp[r],y=(n2)*mp[p];
        if(x==y)
        {
            cout<<'=';
        }
        else if(x>y)
        {
            cout<<'>';
        }
        else
        {
            cout<<'<';
        }
        cout<<endl;
    }
}