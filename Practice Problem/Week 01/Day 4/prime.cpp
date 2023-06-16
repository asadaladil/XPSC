#include<bits/stdc++.h>
using namespace std;
int is_prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i==1||i%2==0&&i!=2||is_prime(i)==0)
        {
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
    }
}