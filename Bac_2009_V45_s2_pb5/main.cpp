#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[41];
    cin.get(s,40);
    char aux[40];
    strcpy(aux,s);
    for(int i=0;i<strlen(s);i++)
    {

        strcpy(aux,s);
        strcpy(aux+i,s+i+1);
        cout<<aux<<endl;
    }


    return 0;
}
