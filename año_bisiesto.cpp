#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    int año;
    cout << "Ingresa un año entero: ";
    cin >> año;

    if (año <= 0) {
        cout << "Error: El año no es positivo." << endl;
    } else if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
        cout << "El año es Bisiesto" << endl;
    } else {
        cout << "El año NO es Bisiesto" << endl;
    }

    return 0;

}
