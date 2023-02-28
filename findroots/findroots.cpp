// findroots.cpp : Defines the entry point for the application.
//

#include "findroots.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    double a, b, c, d;
    double p, q, discriminante;
    double x1, x2, x3; // Posibles raizes
    double PI = 3.14159265;

    // Si el numero de argumentos es diferente a 4, retorna un error
    if (argc != 5) {
        cout << "Error: Debe ingresar cuatro argumentos a, b, c y d" << endl;
        return 1;
    }

    // Convertir los argumentos a doubles
    a = stod(argv[1]);
    b = stod(argv[2]);
    c = stod(argv[3]);
    d = stod(argv[4]);

    // Si el argumento a es 0, retorna un error
    if (a == 0) {
        cerr << "Error: a no puede ser 0" << endl;
        return 1;
    }

    // Obtenemos los coeficientes reducidos
    p = (3 * a * c - b * b) / (3 * a * a);
    q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);

    // Obtenemos la discriminante
    discriminante = q * q / 4 + p * p * p / 27;

    // Si el discriminante es meyor a 0: Una solución real y dos complejas
    if (discriminante > 0) {
        x1 = cbrt(-q / 2 + sqrt(discriminante)) + cbrt(-q / 2 - sqrt(discriminante)) - (b / (3 * a));

        cout << "{ " << x1 << " }" << endl;
    }

    // Si el discriminante es igual a 0
    else if (discriminante == 0) {

        // Si p y q son iguales: Una solución real
        if (p == q) {
            x1 = 2 * cbrt(-q / 2) - (b / (3 * a));
            cout << "{ " << x1 << " }" << endl;
        }

        // Si p y q no son iguales: Dos soluciones reales
        else {
            x1 = 2 * cbrt(-q / 2) - (b / (3 * a));
            x2 = -cbrt(-q / 2) - (b / (3 * a));

            cout << "{ " << x1 << ", " << x2 << " }" << endl;
        }
    }

    // Si el discriminante es menor a 0: Tres soluciones reales
    else {
        x1 = 2 * sqrt(-p / 3) * cos(acos((3 * q) / (2 * p) * sqrt(-3 / p)) / 3) - (b / (3 * a));
        x2 = 2 * sqrt(-p / 3) * cos(acos((3 * q) / (2 * p) * sqrt(-3 / p)) / 3 + (2 * PI / 3)) - (b / (3 * a));
        x3 = 2 * sqrt(-p / 3) * cos(acos((3 * q) / (2 * p) * sqrt(-3 / p)) / 3 - (2 * PI / 3)) - (b / (3 * a));

        cout << "{ " << x1 << ", " << x2 << ", " << x3 << " }" << endl;
    }

    return 0;
}