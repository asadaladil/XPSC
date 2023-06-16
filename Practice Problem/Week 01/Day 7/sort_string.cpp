#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int A[126];
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        char c;
        cin>>c;
        A[c]++;
    }
    for(int i=97;i<123;i++)
    {
        for(int j=1;j<=A[i];j++)
        {
            printf("%c",i);
        }
    }

}