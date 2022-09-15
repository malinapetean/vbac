#include <iostream>

using namespace std;

int coloanepivot(int n,int A[10][10],int c)
{

    for(int i=2;i<100;i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
            if(A[j][0]*i== A[j][c])
                k++;
        if(k==n)
            return i;
    }
    return 1;

}
int main()
{
    int n,A[10][10];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    int p=1;
    for(int i=0;i<n;i++)
        p*=coloanepivot(n,A,i);
    if(p==1)
        cout<<"Nu exista";
    else
        cout<<p;
    return 0;
}
