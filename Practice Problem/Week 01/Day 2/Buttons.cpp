#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t=2;
    cin>>x>>y;
    int a=0;
    while(t--)
    {
        if(x>y)
        {
            a+=x;x--;
        }
        else
        {
            a+=y;y--;
        }
    }
    cout<<a;

}