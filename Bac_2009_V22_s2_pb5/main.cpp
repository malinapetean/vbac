#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int nr= n*m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<nr<< " ";
            nr--;
        }
        cout<<endl;
    }
    return 0;
}
