#include <iostream>

using namespace std;

int main()
{
    int n,m[50][50],ok=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j && m[i][j]!=0)
                ok=0;
        }
    }
    if(ok==1)
    {
        cout<<"Este triunghiulara superior";
    }
    else
    {
        cout<<"Nu este triunghiulara superior";
    }
    return 0;
}
