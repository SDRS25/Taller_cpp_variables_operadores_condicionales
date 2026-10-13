#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    int numero_1, numero_2, numero_3, mayor, menor;

    cout << "Ingresa el primer número: ";
    cin >> numero_1;

    cout << "Ingresa el segundo número: ";
    cin >> numero_2;

    cout << "Ingresa el tercer número: ";
    cin >> numero_3;

    mayor = numero_1;
    menor = numero_1;

    if (numero_2 > mayor) {
        mayor = numero_2;
    }

    if (numero_3 > mayor) {
        mayor = numero_3;
    }

    if (numero_2 < menor) {
        menor = numero_2;
    }

    if (numero_3 < menor) {
        menor = numero_3;
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    if (numero_1 == numero_2 && numero_2 == numero_3) {
        cout << "Los tres numeros son iguales." << endl;
    } else if (numero_1 == numero_2 ||
            numero_1 == numero_3 ||
           numero_2 == numero_3) {
        cout << "Hay dos iguales y uno distinto." << endl;
    } else {
        cout << "Los tres numeros son distintos." << endl;
    }

    return 0;

}