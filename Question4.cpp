// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// before attempting this code my answer is a gets the value of b;
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
}