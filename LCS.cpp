using namespace std;
int mmax(int a,int b,int c)
{
    if(a>=b && a>=c)return a;
    if(b>=a && b>=c)return b;
    if(c>=a && c>=b)return c;
    
}
int main(void)
{
int t,n,m;
cin>>t;
while(t--)
{
    cin>>n>>m;
    char ch1[101],ch2[101];
    cin>>ch1;
    cin>>ch2;
    n=strlen(ch1);
    m=strlen(ch2);
    int arr[n][m];
    memset(arr,0,sizeof(arr));
    if(ch1[0]==ch2[0])
    arr[0][0]=1;
    
    for(int i=1;i<m;i++)
    {
        if(ch1[0]==ch2[i])
        arr[0][i]=1;
        else
        arr[0][i]=arr[0][i-1];
    }
    
    for(int i=1;i<n;i++)
    {
        if(ch1[i]==ch2[0])
        arr[i][0]=1;
        else
        arr[i][0]=arr[i-1][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(ch2[j]==ch1[i])
            arr[i][j]=arr[i-1][j-1]+1;
            else
            arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
        }
    }
    
   
    cout<<arr[n-1][m-1]<<endl;
}
}
