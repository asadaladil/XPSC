#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}