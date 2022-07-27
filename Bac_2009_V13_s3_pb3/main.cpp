#include <iostream>

using namespace std;
///1 2 1 3 2 1 4 3 2 1 5 4 3 2 1
int main()
{
    int n;
    cin>>n;
    int ct=0,nr;
    for(int i=1;i<=n;i++)
    {
        int aux=i;
        while(aux!=0 && ct!=n)
        {
            cout<<aux<<" ";
            nr=aux;
            aux--;
            ct++;
        }
    }
    cout<<endl;
    cout<<nr;
    return 0;
}
