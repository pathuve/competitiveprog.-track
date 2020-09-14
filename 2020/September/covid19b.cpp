#include<bits/stdc++.h>
using namespace std;
long long int ans(long long int i,double matrix[][6],long long int n,long long int visited[])
{
    visited[i]=1;
    long long int ret=1;
    for(long long int j=1;j<=n;j++)
    {
       // cout<<matrix[i][j]<<"visted:"<<j<<endl;
        if(matrix[i][j]>0&&visited[j]==0)
            {

        ret=ret+ans(j,matrix,n,visited);}

    }
    return(ret);
}
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
      long long int n;
      cin>>n;
      double speed[n+1];
      for(long long int i=1;i<=n;i++)
        cin>>speed[i];
      double matrix[6][6];
      for(long long int i=1;i<=n;i++)
        matrix[i][i]=0;
      for(long long int i=1;i<=n;i++)
      {
          for(long long int j=i+1;j<=n;j++)
          {
              if((speed[i]-speed[j])!=0&&(j-i)/(speed[i]-speed[j])>=0)
              {
                  matrix[i][j]=double((j-i)/(speed[i]-speed[j]));
                  matrix[j][i]=matrix[i][j];
              }
              else
              {
                  matrix[i][j]=-1;
                  matrix[j][i]=-1;
              }

          }
      }
      /*for(long long int i=1;i<=n;i++)
      {
          for(long long int j=1;j<=n;j++)
          {
              cout<<matrix[i][j]<<" ";
          }
          cout<<endl;
      }*/
      long long int mini=INT_MAX,maxi=INT_MIN;
      for(long long int i=1;i<=n;i++)
      {
          long long int visited[n+1];
          for(long long int i=1;i<=n;i++)
            visited[i]=0;
          long long int curr=ans(i,matrix,n,visited);
          if(curr>maxi)
            maxi=curr;
          if(curr<mini)
            mini=curr;
      }
      cout<<mini<<" "<<maxi;
  }
}
