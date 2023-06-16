#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>A(n),B;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    list<int>li;
    for(int i=0;i<n;i++)
    {
        if(li.size()!=0&&li.front()<=i-k)
        {
            li.pop_front();
        }
        while(li.size()!=0&&A[li.back()]<A[i])
        {
            li.pop_back();
        }
        li.push_back(i);
        if(i>=k-1)
        {
            B.push_back(A[li.front()]);
        }
    }
    for(int i:B)
    {
        cout<<i<<" ";
    }
}


/*
50 15
1 2 3 1 4 5 2 3 6 1 2 6 10 6 9 4 6 1 8 3 5 2 3 4 3 1 6 3 15 31 531 31 31 6 1 3 6 13 655 3 6 3161 6 31 61 15631 61653 1315 665 36165 

*/