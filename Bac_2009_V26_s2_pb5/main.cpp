#include <iostream>


using namespace std;
int produsColoana(int n,int A[10][10],int coloana)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        p*=A[i][coloana];
    }
    return p;
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
        {
            if(A[i][j]== produsColoana(n,A,j)/A[i][j])
            {
                cout<<A[i][j]<< " ";
            }
        }
    }
    return 0;
}
