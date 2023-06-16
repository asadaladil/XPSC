#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=1;
    while(1)
    {
        if(x*c>=a&&x*c<=b)
        {
            cout<<x*c;
            break;
        }
        else if(x*c>b)
        {
            cout<<-1;
            break;
        }
        x++;
    }
}