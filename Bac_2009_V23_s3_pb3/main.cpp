#include <iostream>

using namespace std;
void shift(int n, int x[100])
{

    int aux = x[0];
    for (int i=1;i<n;i++)
        x[i-1]=x[i];
    x[n-1]=aux;

}
int main()
{
    int n, x[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        shift(n-i,x);
    for (int i=0;i<n;i++)
        cout<<x[i]<< " ";
    return 0;
}
