#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int>ms;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        ms.insert(a);
    }
    int a=0;
    for(int i:ms)
    {
        if(ms.find(i+1)!=ms.end())
        {
            a++;
        }
    }
    cout<<a;
}