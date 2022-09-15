#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("numere.in");
int main()
{
    int n,m,A[100],B[100],a,b;
    fin>>n;
    fin>>m;
    for(int i=0;i<n;i++)
    {
        fin>>a;
        A[i]=a;
    }
    for(int i=0;i<m;i++)
    {
        fin>>b;
        B[i]=b;
    }
    int s=0,k=0;
    for(int i=0;i<n;i++)
    {
        s+=A[i];
        if(s==B[k])
        {
            s=0;
            k++;
        }
    }
    if(k==m)
        cout<<"Da";
    else
        cout<<"Nu";
    return 0;
}
