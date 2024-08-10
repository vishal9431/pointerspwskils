#include <iostream>
using namespace std;
int main()
{
    int n =5;
    int p = 5;
    int *ptr = &n;
    int *ptw = &p;
    cout<<(*ptr)*(*ptw)<<" ";
}