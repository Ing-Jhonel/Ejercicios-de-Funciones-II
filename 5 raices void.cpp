#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
// Funci�n calcularRaices: Ampl�a el ejercicio anterior definiendo una funci�n void llamada
//calcularRaices que reciba los coeficientes de la ecuaci�n (a, b, c) por valor y las variables donde
//se almacenar�n las ra�ces por referencia. Adem�s, incluye una variable por referencia que indique si
//las ra�ces son reales o complejas. La funci�n debe calcular las ra�ces utilizando la f�rmula general y
//actualizar las variables correspondientes.
//ENTRADA|| a: termino cuadratico  b: termino lineal  c: termino independiente
//SALIDA|| raiz1: primera raiz  raiz2: segunda raiz

void calcularRaices(double a, double b, double c, double& raiz1, double& raiz2, bool& sonReales){
	double discriminante = b * b - 4 * a * c;
	
    if (discriminante > 0) {
        // Ra�ces reales y diferentes
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        sonReales = true;
    } else if (discriminante == 0) {
        // Ra�ces reales e iguales
        raiz1 = raiz2 = -b / (2 * a);
        sonReales = true;
    } else {
        // Ra�ces no reales
        sonReales = false;
    }
}

int main() {
	
    double a, b, c;
    double raiz1, raiz2;
    bool sonReales;

    cout << "ENCUENTRE LAS RAICES DE SU ECUACION CUADRATICA" << endl;
    cout << "**********************************************" << endl << endl;
    cout << "Indique el termino cuadratico (a): ";
    cin >> a; 
    cout << "Indique el termino lineal (b): ";
    cin >> b;
    cout << "Indique el termino independiente (c): ";
    cin >> c;
    cout << endl;
    cout << "Ecuacion cuadratica: " << a << "x^2 + " << b << "x + " << c << endl << endl;

    // Llamada a la funci�n que calcula las ra�ces
    calcularRaices(a, b, c, raiz1, raiz2, sonReales);

   // Mostrar los resultados
    if (sonReales) {
        if (raiz1 == raiz2) {
            cout << "La raiz de la ecuacion cuadratica es " << raiz1 << endl;
        } else {
            cout << "Las raices de la ecuacion cuadratica son " << raiz1 << " y " << raiz2 << endl;
        }
    } else {
        cout << "Las raices no son numeros reales." << endl;
    }

    return 0;
}
