#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int n,ct=0,min1=99999999,min2=999999999;

    while(fin>>n)
    {
        ct=0;
        int aux=n;
        while(aux)
        {
            aux/=10;
            ct++;
        }
        if(ct==2)
        {
            if(n<min2)
            {
                min1=min2;
                min2=n;
            }
            else if(n<min1)
                min1=n;

        }
    }
    cout<<min1<< " "<<min2;

    return 0;
}
