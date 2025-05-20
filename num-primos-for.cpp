#include <iostream>
#include <cmath>

using namespace std;
// libreria de entrada y salida

int main()
{
    int num = 0, primo = 1;
    float modulo = 0;

    cout << "ingrese un numero entero" << endl;
    cin >> num;

    for (int i = num - 1; i <= 2; i--)
    {
        modulo = num % i;
        if (modulo == 0)
        {
            cout << "no es primo";
            primo = 0;
            break;
        }
    }
    if (primo == 1)
    {
        cout << "es primo";
    }
    return 0;
}