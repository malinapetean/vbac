#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numete.txt");

int main()
{
    int n,x=0,y1=9999,y2;
    fin>>n;
    while(fin>>n)
    {
        if(n>=100 && n<1000)
        {
            if(n>x)
            {
                y2=x;
                x=n;

            }
            else if(n>y2)
                y2=n;
        }
        if(n>=1000)
        {
            if(n<y1)
                y1=n;
        }
    }
    if(y1-x==x-y2)
        cout<<x<< " "<<y1;
    else if(y1-x<x-y2)
        cout<<x<<" "<<y1;
    else
        cout<<x<<" "<<y2;

    return 0;
}
