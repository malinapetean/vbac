#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int sumaPara(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    if(s%2==0)
        return 1;
    else
        return 0;

}

int main()
{
    int nr,ct=0,ctnr=0;
    while(fin>>nr)
    {
        ctnr++;
        if(sumaPara(nr))
            ct++;
        cout<<nr<<" ";
        if(ctnr%5==0)
            cout<<endl;

    }
    if(ctnr%5!=0)
        cout<<endl;
    cout<<ct;
    return 0;
}
