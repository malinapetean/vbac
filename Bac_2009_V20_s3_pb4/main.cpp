#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("nr1.txt");
    ifstream g("nr2.txt");
    int n,m,x,y,i,j;
    f>>n;
    g>>m;
    i=j=1;
    f>>x;
    g>>y;
    while(i<=n && j<=m)
    {
        if(x<y)
        {
            f>>x;
            i++;
        }
        else if(y<x)
        {
            g>>y;
            j++;
        }
        else
        {
            cout<<x<<" ";
            f>>x;
            g>>y;
            i++;
            j++;
        }
    }
    return 0;
}
