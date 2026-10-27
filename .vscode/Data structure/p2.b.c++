
#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
    cout << "Inside call by value: " << x << endl;
}

void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside call by reference: " << x << endl;
}

int main()
{
    int a = 5, b = 5;

    cout << "Before call by value: " << a << endl;
    callByValue(a);
    cout << "After call by value: " << a << endl;

    cout << "\nBefore call by reference: " << b << endl;
    callByReference(b);
    cout << "After call by reference: " << b << endl;

    return 0;
}
