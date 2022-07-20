#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");

int main()
{
    int n,nr1,p=1,nr;
    fin>>n;
    fin>>nr1;
    n--;
    while(n)
    {
        fin>>nr;
        if(nr1>nr)
            p++;
        n--;
    }
    cout<<p;
    return 0;
}
