#include <iostream>

using namespace std;

int main()
{
    int n,p,k=0,v[20][20],ok;
    cin>>n>>p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            ok=1;
            while(ok)
            {
                int x=k*k;
                if(x%2==0)
                {
                    v[i][j]=x;
                    ok=0;
                    k++;
                }
                else
                    k++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
