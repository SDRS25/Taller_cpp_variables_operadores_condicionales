#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {

    float valor_hora, horas_trabajadas;
    float horas_normales, horas_extra, horas_dobles;
    float salario_bruto, descuento, salario_neto;

    cout << "Ingresa el valor de la hora: ";
    cin >> valor_hora;

    cout << "Ingresa la cantidad de horas trabajadas: ";
    cin >> horas_trabajadas;

    if (valor_hora <= 0 || horas_trabajadas < 0) {
        cout << "Error: el valor de la hora debe ser positivo y las horas no pueden ser negativas." << endl;

    } else {
        if (horas_trabajadas <= 40) {
            horas_normales = horas_trabajadas;
            horas_extra = 0;
            horas_dobles = 0;

        } else if (horas_trabajadas <= 48) {
            horas_normales = 40;
            horas_extra = horas_trabajadas - 40;
            horas_dobles = 0;

        } else {
            horas_normales = 40;
            horas_extra = 8;
            horas_dobles = horas_trabajadas - 48;
        }

        salario_bruto = (horas_normales * valor_hora)
                      + (horas_extra * valor_hora * 1.5)
                      + (horas_dobles * valor_hora * 2);

        if (salario_bruto > 2000000) {
            descuento = salario_bruto * 0.08;
        } else {
            descuento = salario_bruto * 0.04;
        }

        salario_neto = salario_bruto - descuento;

        cout << endl;
        cout << "Horas normales: " << horas_normales << endl;
        cout << "Horas extra: " << horas_extra << endl;
        cout << "Horas dobles: " << horas_dobles << endl;
        cout << "Salario bruto: " << salario_bruto << endl;
        cout << "Valor del descuento: " << descuento << endl;
        cout << "Salario neto: " << salario_neto << endl;
    }

    return 0;
}
