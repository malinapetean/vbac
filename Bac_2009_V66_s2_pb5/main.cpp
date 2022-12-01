#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[50],aux[50];
    cin.get(s,50);
    for(int i=0;i<strlen(s);i++)
    {
        aux[i]=s[i];
        aux[i+1]='\0';
        cout<<aux<<endl;
    }

    return 0;
}
