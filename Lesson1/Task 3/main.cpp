#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;
    a=a-b-b+a-b-b;
    cout << "a=";
    cout << a << endl;
    a=50;
    b=a;
    cout << "b=";
    cout << b;
    return 0;
}
