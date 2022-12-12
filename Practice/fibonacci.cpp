// Q.2 - Write a C++ Program to print fibonacci series
// without using recursion?

#include <iostream>
using namespace std;
int main()
{
    int num, n1 = 0, n2 = 1, n3, i;
    cout << "Enter Your Number : " << endl;
    cin >> num;
    cout << n1 << " " << n2 << " ";
    for (i = 2; i < num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}