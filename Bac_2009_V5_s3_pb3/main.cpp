#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("nr.txt");
    int n;
    cin>>n;
    while(n!=0)
    {
        fout<<n<<" ";
        n/=10;
    }
    return 0;
}
