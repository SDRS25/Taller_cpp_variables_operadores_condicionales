#include <iostream>
#include <string>
using namespace std;

// Samuel David Ruiz Serrano

int main() {
    
    float lado_a, lado_b, lado_c, perimetro;

    cout << "Pon la longitud del lado A: ";
    cin >> lado_a;
    cout << "Pon la longitud del lado B: ";
    cin >> lado_b;
    cout << "Pon la longitud del lado C: ";
    cin >> lado_c;

    if (lado_a <= 0 || lado_b <= 0 || lado_c <= 0) {
        cout << "Los lados deben de ser mayores que 0" << endl;
    } else if (lado_a + lado_b <= lado_c ||
               lado_a + lado_c <= lado_b ||
               lado_b + lado_c <= lado_a) {
        cout << "Los lados no forman un triangulo." << endl;
               } else {
        perimetro = lado_a + lado_b + lado_c;

        cout << "Perimetro: " << perimetro << endl;

        if (lado_a == lado_b && lado_b == lado_c) {
            cout << "Triangulo: Equilatero." << endl;
        } else if (lado_a == lado_b ||
                   lado_a == lado_c ||
                   lado_b == lado_c) {
            cout << "Triangulo: Isosceles." << endl;
        } else {
            cout << "Triangulo: Escaleno." << endl;
        }
    }

    return 0;

}
