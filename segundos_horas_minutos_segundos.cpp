#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    int segundos, horas, minutos, segundos_final;

    cout << "Ingresa el total de segundos: ";
    cin >> segundos;

    if (segundos < 0) {
        cout << "Error: el valor es negativo o no valido." << endl;
    } else {
        horas = (segundos / 3600);
        minutos = (segundos % 3600) / 60;
        segundos_final = (segundos % 3600) % 60;

        cout << "Total de segundos: " << segundos << endl;
        cout << "Horas: " << horas << endl;
        cout << "Minutos: " << minutos << endl;
        cout << "Segundos: " << segundos_final << endl;
    }

    return 0;
    
}
