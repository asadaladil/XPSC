#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int sub_array(vector<int>A,int k)
{
    int n=A.size();
    int mx=0;
    for(int i=0;i<k;i++)
    {
        mx+=A[i];
    }
    int maxx=mx;
    /*
    for(int i=k;i<n;i++)
    {
        mx+=A[i]-A[i-K];
        maxx=max(mx,maxx);
    }
    
    */
    int l=0,r=k-1;
    while(r<n)
    {
        mx-=A[l];
        l++;r++;
        mx+=A[r];
        maxx=max(maxx,mx);
    }
    return maxx;
}
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k;
    cin>>k;
    cout<<sub_array(A,k)<<endl;
}