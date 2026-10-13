#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    double ingreso, deuda, relacion, capacidad;
    int edad, historial;

    cout << "Ingresa el ingreso mensual: ";
    cin >> ingreso;

    cout << "Ingresa la deuda mensual: ";
    cin >> deuda;

    cout << "Ingresa la edad: ";
    cin >> edad;

    cout << "Tiene historial crediticio? (1 = Si, 0 = No): ";
    cin >> historial;

    if (ingreso <= 0) {
        cout << "Error: el ingreso debe ser mayor que cero." << endl;

    } else if (deuda < 0) {
        cout << "Error: la deuda no puede ser negativa." << endl;

    } else if (edad < 18 || edad > 100) {
        cout << "Error: la edad debe estar entre 18 y 100 años." << endl;

    } else if (historial != 0 && historial != 1) {
        cout << "Error: el historial debe ser 1 o 0." << endl;

    } else {
        relacion = deuda / ingreso;
        capacidad = ingreso - deuda;

        cout << "Relacion deuda/ingreso: " << relacion << endl;
        cout << "Capacidad de pago: " << capacidad << endl;

        if (relacion > 0.5 || capacidad < 0) {
            cout << "Nivel de riesgo: Alto." << endl;

        } else if (relacion <= 0.3 && edad >= 25 && historial == 1) {
            cout << "Nivel de riesgo: Bajo." << endl;

        } else {
            cout << "Nivel de riesgo: Medio." << endl;
        }
    }

    return 0;

}
