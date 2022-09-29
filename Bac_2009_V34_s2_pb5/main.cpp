#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],ct=2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ct%2==0 && ct%3!=0)
            {
                a[i][j]=ct;
                ct+=2;
            }
            else
            {
                a[i][j]=ct+2;
                ct+=4;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
