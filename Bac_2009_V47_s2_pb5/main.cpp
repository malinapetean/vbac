#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n,m,a[11][11],b[11][11];
    fin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[n-1-j][i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
