#include <iostream>
#include <string.h>

using namespace std;
int nrvocale(char s[100],int n)
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(strchr("aeiou",s[i])!=0)
            ct++;
    }
    return ct;
}

int main()
{
    char m[100][30];
    int ct=0,n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin.getline(m[i],30);

    }
    for(int i=1;i<=n;i++)
    {
        if(strlen(m[i])==nrvocale(m[i],strlen(m[i])))
        {
            ct++;
        }

    }
    cout<<ct;
    return 0;
}
