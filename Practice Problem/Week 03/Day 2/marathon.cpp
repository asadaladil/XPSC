#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c=0;cin>>a;
        for(int i=1;i<=3;i++)
        {
            cin>>b;
            if(a<b)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}