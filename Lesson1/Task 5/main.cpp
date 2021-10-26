#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int mess ;
    cout << "Enter the mess of the spaceship:";
    cin >> mess;
    int Fuel;
    Fuel=mess/3-2;
    Fuel=Fuel*300;
    cout << "Fuel=";
    cout << Fuel;
    // Есть проблема в коде,если масса корабля менше 8, то топлево не нужно .


    return 0;
}
