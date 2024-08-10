// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
// my answer is  11  10  11
#include <iostream>
using namespace std;
int main()
{
    int a =10;
    int b =20;
    int *ptr = &a;
    b = *ptr+1;
    ptr =&b;
    cout<<*ptr <<' '<<a<<' '<<b;
}