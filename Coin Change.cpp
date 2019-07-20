#include<bits/stdc++.h>
using namespace std;
int main(void)
 {
     int t,n,m;
     cin>>t;
     while(t--){
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)cin>>arr[i];
         cin>>m;
         sort(arr,arr+n);
         int brr[n][m+1];
         memset(brr,0,sizeof(brr));
         brr[0][0]=1;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<=m;j++)
             {
                 if(i==0 && j==0)continue;
                 
                 brr[i][j]=((i==0)?0:brr[i-1][j])+((arr[i]<=j)?brr[i][j-arr[i]]:0) ;
                 
                 
             }
         }
         cout<<brr[n-1][m]<<endl;
     }
}
