#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,x,a,b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a==b) 
        {
            cout<<0<<endl;
        }
        else if((a+x>r&&a-x<l)||(b+x>r&&b-x<l)) 
        {
            cout<<-1<<endl;
        }
        else if(abs(a-b)>=x) 
        {
            cout<<1<<endl;
        }
        else if((a+x<=r&&b+x<=r)||(a-x>=l&&b-x>=l)) 
        {
            cout<<2<<endl;
        }
        else 
        {
            cout<<3<<endl;
        }   
    }
}