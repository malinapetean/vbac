#include <iostream>

using namespace std;
int dist2(int xa,int ya,int xb,int yb)
{
    int pd;
    pd=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    return pd;
}
int main()
{
    int m[5][5],ok=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    int lat=dist2(m[1][1],m[1][2],m[2][1],m[2][2]);

    for(int i=1;i<4;i++)
    {
        if(dist2(m[i][1],m[i][2],m[i+1][1],m[i+1][2])!=lat)
            ok=0;
    }
    if(ok)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}
