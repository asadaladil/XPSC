#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<int>S;
void is_prime()
{
    S.insert(2);
    for(int i=3;i<=3000;i+=2)
    {
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            S.insert(i);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    is_prime();
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int a=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0&&S.find(i/j)!=S.end())
            {
                a++;
            }
        }
        if(a==2)
        {
            ans++;
        }
    }
    cout<<ans;
}