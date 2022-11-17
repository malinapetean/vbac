#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[10];
    int v[10],nr1=0,nr2=0,ct=0,i=0;
    cin.get(s,10);
    while(s[i]!='.')
    {
        nr1=nr1*10+(s[i]-'0');
        i++;
    }
    ct=i;
    cout<<nr1<<endl;
    i++;
    while(s[i])
    {
        nr2=nr2*10+(s[i]-'0');
        i++;
    }
    while(nr2%10==0)
    {
        nr2=nr2/10;
    }
    cout<<nr2<<endl;
    cout<<nr1+nr2<<endl;
    return 0;
}
