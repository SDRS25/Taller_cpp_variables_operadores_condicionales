#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    float peso, estatura, imc;

    cout << "Ingresa el peso (En kilogramos): ";
    cin >> peso;
    cout << "Ingresa la estatura (En Metros): ";
    cin >> estatura;

    if (peso <= 0 || estatura <= 0) {
        cout << "Error: El peso o la altura es 0 o menor que 0." << endl;
    } else {
        imc = peso / (estatura *  estatura);
        cout << "Tu IMC es: " << imc << endl;

        if (imc < 18.5) {
            cout << "Bajo Peso." << endl;
        } else if (imc < 25) {
            cout << "Normal." << endl;
        } else if (imc < 30) {
            cout << "Sobrepeso." << endl;
        } else {
            cout << "Obesidad." << endl;
        }
    }

    return 0;

}
