#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;cin>>a;
    int r=(a+1)/2;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i==j&&j==r)
            {
                cout<<"X";
            }
            else if(j==a-i+1)
            {
                cout<<"/";
            }
            else if(i==j)
            {
                cout<<"\\";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}