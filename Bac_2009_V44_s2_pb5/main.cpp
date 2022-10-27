#include <iostream>

using namespace std;

int main()
{
    int n,m[24][24],ct=1,nrlinii=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ct=i+1;
        for(int j=n-1;j>=0;j--)
        {
            if(ct==1){
                m[i][j]=1;

            }
            else{

                m[i][j]=ct;
                ct--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
