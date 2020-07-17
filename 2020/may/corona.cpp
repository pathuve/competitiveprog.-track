#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,nq;
        cin>>n>>nq;
        char str[n];
        cin>>str;
        unordered_map<char, int> umap1,umap2;
        for(int i=0;i<n;i++)
        {
           umap1[str[i]]++;
           if(umap1[str[i]]>1)
           {
               umap2[str[i]]=umap1[str[i]];
           }
        }
        while(nq--)
        {
            long long int q,ctr=0;
            cin>>q;
            for (auto x : umap2)
              {
                  if(x.second-q>0)
                    ctr=ctr+x.second-q;
              }
            cout<<ctr<<endl;
        }
    }
}
