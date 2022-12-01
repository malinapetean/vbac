#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[50],aux[50];
    cin.get(s,50);
    for(int i=strlen(s)-1;i>=0;i--)
    {
        strcpy(aux,s+i);
        cout<<aux<<endl;
    }
    return 0;
}
