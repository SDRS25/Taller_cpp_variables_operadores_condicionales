#include <iostream>
#include <string>
#include <cmath> // Para raiz cuadrada
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    double a, b, c, discriminante;
    double x, x1, x2;

    cout << "Ingresa el coeficiente a: ";
    cin >> a;

    cout << "Ingresa el coeficiente b: ";
    cin >> b;

    cout << "Ingresa el coeficiente c: ";
    cin >> c;

    if (a == 0 && b == 0) {
        cout << "No es una ecuacion de primer ni de segundo grado." << endl;

    } else if (a == 0) {
        x = -c / b;

    cout << "Es una ecuacion lineal." << endl;
    cout << "El valor de x es: " << x << endl;

    } else {
        discriminante = (b * b) - (4 * a * c);

    cout << "Discriminante: " << discriminante << endl;

        if (discriminante > 0) {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "La ecuacion tiene dos raices reales." << endl;
            cout << "Primera raiz: " << x1 << endl;
            cout << "Segunda raiz: " << x2 << endl;
        } else if (discriminante == 0) {
            x = -b / (2 * a);

            cout << "La ecuacion tiene una unica raiz real." << endl;
            cout << "Raiz: " << x << endl;
        } else {
        cout << "La ecuacion tiene raices complejas." << endl;
    }
}

    return 0;

}
