#include <iostream>
#include <iomanip>

using namespace std;
float nreal(int x, int y)
{
    float k;
    if(y<10)
        k=((float)y)/10;
    else if(y<100)
        k=((float)y)/100;
    else if(y<1000)
        k=((float)y)/1000;
    else
         k=((float)y)/10000;
    k+=x;
    return k;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<nreal(x,y);
    return 0;
}
