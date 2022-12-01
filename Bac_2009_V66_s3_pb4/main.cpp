#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f1("a.txt");
    ifstream f2("b.txt");
    int a,b,ct=0,minim=-1;
    while(f2>>b)
    {
        if(minim==-1 || b<minim)
            minim=b;
    }
    while(f1>>a)
    {
        if(a<minim)
        {
            ct++;
        }

    }
    cout<<ct;
    return 0;
}
