#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256], m[100][100];
    char *p;
    cin.get(s,256);
    p=strtok(s,"*");
    int ct=0;
    while(p!=NULL)
    {
        strcpy(m[ct++],p);
        p=strtok(NULL," ");

    }
    for(int i=0;i<ct;i++)
        cout<<m[i]<<endl;
    for(int i=0;i<ct;i++)
    {
        if(strcmp(m[i],m[0])==0)
            cout<<"*";
        else
            cout<<m[i]<<"*";

    }

    return 0;
}
