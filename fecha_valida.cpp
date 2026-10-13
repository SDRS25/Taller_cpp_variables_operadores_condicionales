#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    int dia, mes, año, dias_mes;

    cout << "Ingresa el dia: ";
    cin >> dia;

    cout << "Ingresa el mes: ";
    cin >> mes;

    cout << "Ingresa el año: ";
    cin >> año;

    if (año <= 0 || mes < 1 || mes > 12) {
        cout << "Error: el año o el mes no son validos." << endl;

    } else {

        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dias_mes = 31;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                dias_mes = 30;
                break;

            case 2:
                if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
                    dias_mes = 29;
                } else {
                    dias_mes = 28;
                }
                break;
        }

        if (dia < 1 || dia > dias_mes) {
            cout << "La fecha no es valida." << endl;
        } else {
            cout << "La fecha es valida." << endl;
            cout << "El mes tiene " << dias_mes << " dias." << endl;
        }
    }

    return 0;

}