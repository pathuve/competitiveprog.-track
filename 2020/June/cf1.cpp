#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int l=0;
    while(t--&&l!=-1)
    {
        long long int n,p,r,ctr,nm=0;
        cin>>n>>p;
        long long int mat[n][n];
        cout<<"1"<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
        cin>>ctr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=0;
            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"1"<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
                cin>>r;
                mat[i][j]=r;
                if(r==1)
                    nm++;
                if(ctr==nm)
                  break;
            }

        }
        cout<<"2"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";

            }
           cout<<endl;
        }

        cin>>l;



    }



}
