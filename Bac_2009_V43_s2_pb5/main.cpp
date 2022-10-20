#include <iostream>

using namespace std;

int main()
{
    int n,m[24][24];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                m[i][j]=2;
            else if(i>j)
                m[i][j]=3;
            else
                m[i][j]=1;
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
