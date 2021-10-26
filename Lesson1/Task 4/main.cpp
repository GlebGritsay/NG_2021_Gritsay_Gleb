#include <iostream>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << " Enter a: " << endl;
    cin >> a;
    int b ;
    cout << " Enter b: " << endl;
    cin >> b;
    int c;
    cout << " Enter c: " << endl;
    cin >> c;
    int D;
    D = b*b-4*a*(-c);
    cout << "D=";
    cout << D << endl;
    int x;
    int y;

    if(D>0)
    {
    x=(-b)+ sqrt(D)/2*a;
    y=(-b)- sqrt(D)/2*a;
    cout << "x=";
    cout << x << endl;
    cout << "y=";
    cout << y;
    }
    else
        if(D<0)
        {
        cout << " Has not roots ";
        }
        else
            if(D==0)
            {
            x=(-b)/2*a;
            cout << "x=";
            cout << x;
            }

    return 0;
}
