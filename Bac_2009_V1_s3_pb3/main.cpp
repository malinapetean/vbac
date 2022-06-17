#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("bac.txt");
int main()
{
    int n;
    cin>>n;
    int nr,ok=0;
    while(fin>>nr)
    {
        if(nr%n==0)
        {
            cout<<nr<<" ";
            ok=1;
        }

    }
    if(ok==0)
        cout<<"NU EXISTA";
    return 0;
}
