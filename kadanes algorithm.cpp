#include<bits/stdc++.h>
using namespace std;
int main(void)
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    
	    int sum=0,l=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	          l=((sum>=l)?sum:l);
	        if(sum<=0)//m8 nt b equal to
	        {
	            sum=0;
	         //   l=((sum>=l)?sum:l);
	        }
	       // l=((sum>=l)?sum:l);
	    }
	    cout<<l<<endl;
	}
     
     
 }
