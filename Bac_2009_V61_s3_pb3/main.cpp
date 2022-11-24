#include <iostream>
#include <cmath>

using namespace std;
void cifra(double x,int &y)
{
    y=floor(x);
    y=y%10;
}

int main()
{
    double m1,m2;
    int y1,y2;
    cin>>m1;
    cin>>m2;
    cifra(m1,y1);
    cifra(m2,y2);
    cout<<y1<<" "<<y2;
    if(y1==y2)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
