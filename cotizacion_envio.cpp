#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    double peso, distancia, tarifa;
    int zona;
    char fragil;

    cout << "Ingresa el peso del paquete en kilogramos: ";
    cin >> peso;

    cout << "Ingresa la distancia en kilometros: ";
    cin >> distancia;

    cout << "Ingresa la zona (1 = Nacional, 2 = Internacional): ";
    cin >> zona;

    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

    if (peso <= 0) {
        cout << "Error: el peso debe ser mayor que cero." << endl;

    } else if (distancia <= 0) {
        cout << "Error: la distancia debe ser mayor que cero." << endl;

    } else if (peso > 30) {
        cout << "Error: el peso del paquete no puede superar los 30 kg." << endl;

    } else if (zona != 1 && zona != 2) {
        cout << "Error: la zona debe ser 1 o 2." << endl;

    } else if (fragil != 'S' && fragil != 's' &&
               fragil != 'N' && fragil != 'n') {
        cout << "Error: debes indicar S o N para el paquete fragil." << endl;

    } else {
        tarifa = 8000 + (peso * 1200) + (distancia * 50);

        if (zona == 2) {
            tarifa = tarifa * 1.5;
        }

        if (fragil == 'S' || fragil == 's') {
            tarifa = tarifa * 1.20;
        }

        cout << "El valor final a pagar es: $" << tarifa << endl;
    }

    return 0;

}
