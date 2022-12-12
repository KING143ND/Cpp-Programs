// Q.1 - Write a C++ Program to print fibonacci series
// with using recursion?

#include <iostream>
using namespace std;

void printfib(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        printfib(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter Your Number : ";
    cin >> n;
    cout << "0 " <<  "1 ";
    printfib(n - 2);
    return 0;
}