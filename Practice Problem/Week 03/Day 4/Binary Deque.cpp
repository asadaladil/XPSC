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
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            if(a==1)
            {
                dq.push_back(i);
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
            int mn=0;
            int a=1;
            int b=n;
            while(sum!=s)
            {
                int x=dq.front()-a+1;
                int y=b-dq.back()+1;
                if(x>y)
                {
                    b=dq.back()-1;
                    sum--;
                    mn+=y;
                    dq.pop_back();
                }
                else
                {
                    a=dq.front()+1;
                    sum--;
                    mn+=x;
                    dq.pop_front();
                }
            }
            cout<<mn<<endl;
        }
    }
}