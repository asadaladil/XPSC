#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int A[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
    }
    
    for(int i=0;i<a;i++)
    {
        for(int j=b-1;j>=0;j--)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}