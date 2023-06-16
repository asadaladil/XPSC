#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int a=x;
    if ((x-a)>=0.5)
    {
        cout<<ceil(x);
    }
    else
    {
        cout<<floor(x);
    }
}