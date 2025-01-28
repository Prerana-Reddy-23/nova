#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n&1)
        cout << "lsb is 1";
    else
        cout << "lsb is 0";
    return 0;
}