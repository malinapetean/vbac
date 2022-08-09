#include <iostream>

using namespace std;
int prim(int n)
{
  if(n==0||n==1)
    return 0;
  for(int i=2;i<=n/2;i++)
    if (n%i==0)
      return 0;
  return 1;
}
int i_prim(int n)
{
    int p1,p2,ok=0;
    p1=n-1;
    p2=n+1;
    while(!(prim(p1)))
        p1--;

    while(!prim(p2))
        p2++;
    return p2-p1;
}

int main()
{
    int n;
    cin>>n;
    cout<<i_prim(n);
    return 0;
}
