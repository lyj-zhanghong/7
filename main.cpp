#include <iostream>
using namespace std;
int sum(int n)
{
    int t=0;
    while(n%10!=0)
    {
        t = t*10+n%10;
        n = n/10;
    }
    return t;
}

int main() {
    int n;
    cin>>n;
    if(n<0)
    {
        n = -n;
        n = sum(n);
        cout<<-n;
    }
    else
    {
        n = sum(n);
        cout<<n;
    }
    return 0;
}
