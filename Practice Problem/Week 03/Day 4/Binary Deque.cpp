#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int sum=0;
        deque<int>dq;
        vector<int>A;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            dq.push_back(a);
            sum+=a;
            if(a==1)
            {
                A.push_back(i);
            }
        }
        if(sum==s)
        {
            cout<<0<<endl;
            continue;;
        }
        if(sum<s)
        {
            cout<<-1<<endl;
            continue;;
        }
        else
        {
            
        }
    }
}