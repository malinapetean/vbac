#include <iostream>

using namespace std;
void del(int &x,int y)
{
    long r=0;
    while(x)
    {
        if(x%10<=y)
            r=r*10+x%10;
        x/=10;
    }
    if(r==0)
        x=-1;
    else
        while(r)
        {
            x=x*10+r%10;
            r/=10;
        }
}
int main()
{
    int x,y;
    cin>>x>>y;
    del(x,y);
    cout<<x;
    return 0;
}
