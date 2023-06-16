#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k;cin>>k;
    queue<int>Q;
    for(int i=0;i<k;i++)
    {
        if(A[i]<0)
        {
            Q.push(A[i]);
        }
    }
    cout<<Q.front()<<" ";
    int l=0,r=k-1;
    while(r<n-1)
    {
        if(A[l]==Q.front())
        {
            Q.pop();
        }
        l++;
        r++;
        if(A[r]<0)
        {
            Q.push(A[r]);
        }
        if(Q.empty())
        {
            cout<<"0 ";
        }
        else
        {
            cout<<Q.front()<<" ";
        }
    }
}

/*
8
12 -1 -7 8 -15 30 16 28
3

*/