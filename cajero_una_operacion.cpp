#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    float saldo, monto;
    int opcion;

    cout << "Ingresa el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0) {
        cout << "Error: el saldo inicial no puede ser negativo." << endl;

    } else {
        cout << endl;
        cout << "---- CAJERO AUTOMATICO ----" << endl;
        cout << "1. Consultar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Consignar" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Tu saldo actual es: " << saldo << endl;
                break;

            case 2:
                cout << "Ingresa el monto que deseas retirar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Error: el monto debe ser mayor que cero." << endl;
                } else if (monto > saldo) {
                    cout << "Error: no tienes saldo suficiente para realizar el retiro." << endl;
                } else {
                    saldo = saldo - monto;

                    cout << "Retiro realizado correctamente." << endl;
                    cout << "Tu nuevo saldo es: " << saldo << endl;
                }
                break;

            case 3:
                cout << "Ingresa el monto que deseas consignar: ";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Error: el monto debe ser mayor que cero." << endl;
                } else {
                    saldo = saldo + monto;

                    cout << "Consignacion realizada correctamente." << endl;
                    cout << "Tu nuevo saldo es: " << saldo << endl;
                }
                break;

            default:
                cout << "Error: la opcion ingresada no es valida." << endl;
                break;
        }
    }

    return 0;

}
