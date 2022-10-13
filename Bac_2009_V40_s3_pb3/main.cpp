#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");
int main()
{
    int n;
    fin>>n;
    int primPar=0,primImp=9999,ok1=0,ok2=0;
    while(fin>>n)
    {
        if(n%2==0)
        {
            if(n<primPar)
                ok1=1;
            primPar=n;
        }
        else
        {
            if(n>primImp)
                ok2=1;
            primImp=n;
        }
    }
    if(ok1==1 || ok2==1)
        cout<<"Nu";
    else if(ok1==0 && ok2==0)
        cout<<"DA";
    return 0;
}
