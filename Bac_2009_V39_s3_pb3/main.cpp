#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");

int main()
{
    int n, a[1000],i=0,nr;
    fin>>n;
    while(fin>>nr)
        if(nr%2==0)
        {
            a[i]=nr;
            i++;
        }


    int ok=0;
    for(int j=0;j<i;j++)
        if(a[j]>a[j+1])
            ok=1;
    if(ok==0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
