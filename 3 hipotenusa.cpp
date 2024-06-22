#include <iostream>
#include <cmath>
using namespace std;
//Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
//utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
//sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
//resultado de la hipotenusa calculada.
//ENTRADA|| cateto1: primer cateto  cateto2: segundo cateto
//SALIDA|| c: hipotenusa

int main(){
	
	double cateto1, cateto2, hipotenusa;
	cout << "CALCULA LA HIPOTENUSA DE UN TRIANGULO RECTANGULO" << endl;
	cout << "************************************************" << endl << endl;
	cout << "Indique un cateto: ";
	cin >> cateto1;
	cout << "Indique el otro cateto: ";
	cin >> cateto2;
	hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2); // con el sqrt hallamos la raiz de un numero
	cout << endl;
	cout << "--------------------------------" << endl << endl;
 	cout << "La hipotenusa es: " << hipotenusa << endl;
	return 0;
}
