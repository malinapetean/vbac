#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("intrare.txt");
ofstream fout("iesire.txt");
int main()
{
    int n,a[100],b[100];
    int ct=0,k=0;
    while(fin>>n)
    {
        a[ct++]=n;
    }
    for(int i=0;i<ct;i++)
    {
        for(int j=i+1;j<ct;j++)
        {
            b[k++]=a[i]+a[j];
        }
    }
    for(int i=0;i<k;i++)
        fout<<b[i]<<" ";
    return 0;
}
