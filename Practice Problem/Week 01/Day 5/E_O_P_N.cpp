#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int E=0,O=0,P=0,N=0;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        if(a%2==0)
        {
            E++;
        }
        else
        {
            O++;
        }
        if(a<0)
        {
            N++;
        }
        else if(a>0)
        {
            P++;
        }
    }
    cout<<"Even: "<<E<<endl;
    cout<<"Odd: "<<O<<endl;
    cout<<"Positive: "<<P<<endl;
    cout<<"Negative: "<<N;
}