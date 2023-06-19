#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{	
	int t;
	cin>>t;
	while(t--)
    {
        int n;
		cin>>n;
        string s[n];
		for(int i=0;i<n;i++)
        {
			cin>>s[i];
		}
		int ans=0;
		for(int i=0;i<n;i++)
        {
			for(int j=0;j<n;j++)
            {
				int a=0,b=0;
				if(s[i][j]=='0')
                {
                    a++;
                }
				else 
                {
                    b++;
                }
				if(s[n-1-i][n-1-j]=='0')
                {
                    a++;
                }
				else 
                {
                    b++;
                }
				if(s[n-1-j][i]=='0')
                {
                    a++;
                }
				else 
                {
                    b++;
                }
				if(s[j][n-1-i]=='0')
                {
                    a++;
                }
				else 
                {
                    b++;
                }
				ans+=min(a,b);
				
			}
		}
		cout<<ans/4<<endl;
	}

}