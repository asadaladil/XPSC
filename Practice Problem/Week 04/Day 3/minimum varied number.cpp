#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        string s="";
        int x=9;
        while(n!=0)
        {
            if(n-x<0)
            {
                s+=to_string(n);
                break;
            }
            s+=to_string(x);
            n-=x;
            x--;
        }
        //s+=to_string(n);
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}