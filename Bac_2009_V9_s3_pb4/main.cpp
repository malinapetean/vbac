#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");
long f[1000];

int main()
{
    long k;
    while(fin>>k)
    {
        if(k>=100 && k<=999)
            f[k]++;
    }
    int x=999;
    while(f[x]>0)
        x--;
    int y;
    if(x>100)
    {
        y=x-1;
        while(f[y]>0)
            y--;
    }
    if(x>=100 && y>=100)
        cout<<x<<" "<<y;
    else
        cout<<0;

    return 0;
}
