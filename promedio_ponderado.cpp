#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    float nota_1, nota_2, nota_3, promedio;

    cout << "ingresa la nota 1: ";
    cin >> nota_1;
    cout << "Ingresa la nota 2: ";
    cin >> nota_2;
    cout << "Ingresa la nota 3: ";
    cin >> nota_3;

    if (nota_1 < 0 || nota_1 > 5) {
        cout << "Error: la primer nota no esta en el rango de 0.0 y 5.0." << endl;
    } else if (nota_2 < 0 || nota_2 > 5) {
        cout << "Error: la segunda nota no esta en el rango de 0.0 y 5.0." << endl;
    } else if (nota_3 < 0 || nota_3 > 5) {
        cout << "Error: la tercera nota no esta en el rango de 0.0 y 5.0." << endl;
    } else {
        promedio = (nota_1 * 0.30) + (nota_2 * 0.30) + (nota_3 * 0.40);

        if (promedio >= 4.5) {
            cout << "Excelente." << endl;
        } else if (promedio >= 4.0) {
            cout << "Bueno." << endl;
        } else if (promedio >= 3.0) {
            cout << "Aceptable." << endl;
        } else {
            cout << "Reprobado." << endl;
        }
        cout << "Promedio: " << promedio << endl;
    }

    return 0;

}
