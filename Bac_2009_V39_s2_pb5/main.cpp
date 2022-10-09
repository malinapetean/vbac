#include <iostream>
#include <string.h>

using namespace std;
void invers(char s[20])
{
    int l= strlen(s);
    char aux[20]={};
    int ct=0;
    for(int i=strlen(s)-1;i>=0;i--)
        aux[ct++]=s[i];

    cout<<aux<<" ";
}

int main()
{
    char s[256],m[100][100];
    cin.getline(s,256);
    char *p;
    p=strtok(s," ");
    int ct=0;
    while(p!=NULL)
    {
        strcpy(m[ct],p);
        p=strtok(NULL," ");
        ct++;
    }
    for(int i=0;i<=ct;i++)
    {
        if(strchr("aeiou",m[i][0])&& strchr("aeiou",m[i][strlen(m[i])]))
            invers(m[i]);
        else
            cout<<m[i]<<" ";
    }
    return 0;
}
