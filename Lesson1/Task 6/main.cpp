#include <iostream>

using namespace std;

int main()
{
    cout << "Enter last 3 nambers" << endl;
    cout << "255.255.255." ;
    int numbers;
    cin >> numbers;
    if (numbers==255)
        cout << "1";
    else
        if (numbers==254)
            cout << "2";
        else
            if (numbers==252)
                cout << "4";
            else
                if (numbers==248)
                    cout << "8";
                else
                    if (numbers==240)
                        cout << "16";
                    else
                        if (numbers==224)
                            cout << "32";
                        else
                            if (numbers==192)
                                cout << "64";
                            else
                                if (numbers==128)
                                    cout << "128";
                                else
                                    if (numbers==000)
                                        cout << "256";

    return 0;
}
