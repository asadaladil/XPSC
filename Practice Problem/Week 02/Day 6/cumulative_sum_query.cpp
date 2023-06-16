#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<int>A;
    int a;
    cin>>a;
    A.push_back(a);
    for(int i=1;i<n;i++)
    {
        cin>>a;
        A.push_back(A[i-1]+a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        x==y?cout<<A[y]-A[x-1]:cout<<A[y-x];
        cout<<endl;
    }
}