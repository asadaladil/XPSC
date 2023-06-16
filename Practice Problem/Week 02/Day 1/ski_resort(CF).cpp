#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ll day=0;
        ll r=0;
        for(int i=1;i<=a;i++)
        {
            int x;
            cin>>x;
            if(x<=c)
            {
                r++;
            }
            else
            {
                r=0;
            }
            if(b<=r)
            {
                day+=(r-b)+1;
            }
        }
        cout<<day<<endl;
        
    }
}