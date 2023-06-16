#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.size();
    if(a==1)
    {
        cout<<"000"<<s;
    }
    else if(a==2)
    {
        cout<<"00"<<s;
    }
    else if(a==3)
    {
        cout<<"0"<<s;
    }
    else
    {
        cout<<s;
    }
}