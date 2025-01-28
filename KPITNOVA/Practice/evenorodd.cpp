#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if((n^1)==(n+1))
        cout <<"It is even";
    else
        cout <<"It is odd";
    return 0;
}