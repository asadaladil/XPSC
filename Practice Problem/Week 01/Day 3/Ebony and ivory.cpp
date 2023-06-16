#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;a*i<=c||b*i<=c;i++)
    {
        if((c-i*a)%b==0&&(c-i*a)>=0||(c-i*b)%a==0&&(c-i*b)>=0)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}