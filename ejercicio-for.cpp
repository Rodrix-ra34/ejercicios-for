#include <iostream>
#include <cmath>

using namespace std;
// libreria de entrada y salida

int main()
{
    int num = 0;
    cout << "ingrese un numero entero" << endl;
    cin >> num;

    for (int i = 2; i < num; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}