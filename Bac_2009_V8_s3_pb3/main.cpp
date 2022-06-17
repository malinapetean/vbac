#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream fin("bac.txt");
int main()
{
    int n,ct=0,nr,v[50],s=0;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>nr;
        if(sqrt(nr)==floor(sqrt(nr)))
        {
            ct++;
            v[ct]=nr;
        }
    }
    for(int i=1;i<ct;i++)
    {
        cout<<v[i]<<"+";
        s+=v[i];
    }
    cout<<v[ct];
    s+=v[ct];
    cout<<"="<<s;


    return 0;
}
