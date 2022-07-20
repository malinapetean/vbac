#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int k,nr,ok=0,p=0;
    cin>>k;
    while(fin>>nr)
    {
        if(k<nr)
            p++;
        else if(nr==k)
            ok=1;
    }
    if(ok)
        cout<<p+1;
    else
        cout<<"Nu exista";
    return 0;
}
