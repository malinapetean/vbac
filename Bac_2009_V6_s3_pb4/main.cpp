#include <iostream>
#include <fstream>

using namespace std;
ifstream f ("bac.txt");
int main()
{
    long a, b, ct=1;
    f >> a;
    while (f >> b)
    {
        if (a==b)
            ct++;
        else
        {
            cout << a << " " << ct << " ";
            ct = 1;
        }
        a=b;
    }
    cout << a << " " << ct;
    return 0;
}
