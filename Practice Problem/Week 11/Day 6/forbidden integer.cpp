/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||                                                         ||
||     Rajshahi Unversity of Engineering & Technology      ||
||                                                         ||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||                                                         ||
||                   MD. ASAD-AL-ADIL                      ||
||                                                         ||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define str string
#define P_B push_back
#define p_b pop_back
#define P_F push_front
#define p_f pop_front
#define pi 3.141592654
#define __lcm(x,y) (x*y)/__gcd(x,y)
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        bool flag=true;
        vector<int>A;
        while(1)
        {
            if(k==0||n==0)
            {
                break;
            }
            else if((n%k!=x)&&(n>=k)&&(k!=x))
            {
                flag=false;
                for(int i=1;i<=(n/k);i++)
                {
                    A.P_B(k);
                }
                if(n%k!=0)
                {
                    A.P_B(n%k);
                }
                break;
            }
            else if((n/k)>1&&k!=x)
            {
                n-=k;
                A.P_B(k);
                if((n/k)==1)
                {
                    k--;
                }
            }
            else
            {
                k--;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n"<<A.size()<<endl;
            for(int i:A)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    
}