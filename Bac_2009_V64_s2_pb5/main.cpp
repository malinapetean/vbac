#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[200],m[100][100];
    int l=0,ct=0;
    cin.get(s,200);
    char *p=strtok(s," ");
    while(p!=NULL)
    {
        strcpy(m[l++],p);
        p=strtok(NULL," ");
    }
    for(int i=0;i<l;i++)
    {
        if(strchr("aAeEiIoOuU",m[i][0])!=0 && strchr("aAeEiIoOuU",m[i][strlen(m[i])])!=0 )
        {
            ct++;
            cout<<m[i]<<endl;
        }

    }
    if(ct!=0)
        cout<<ct;
    else
        cout<<"NU EXISTA";
    return 0;
}
