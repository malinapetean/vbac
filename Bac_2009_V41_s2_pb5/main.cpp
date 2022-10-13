#include <iostream>

using namespace std;

int main()
{
    int n,m[24][24];
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            m[i][j]=i+j;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
