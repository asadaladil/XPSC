#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        dq.push_back(a);
    }
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
        if(!dq.empty())
        {
            cout<<dq.back()<<" ";
            dq.pop_back();
        }
    }
}