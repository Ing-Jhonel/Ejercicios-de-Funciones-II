#include <iostream>
#include <cmath>
using namespace std;
//Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
//utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
//sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
//resultado de la hipotenusa calculada.
//ENTRADA|| a: primer cateto  b: segundo cateto
//SALIDA|| c: hipotenusa

int main(){
	
	double a, b, c;
	cout << "Indique un cateto: ";
	cin >> a;
	cout << "Indique el otro cateto: ";
	cin >> b;
	c = sqrt(a*a + b*b);
	cout << "La hipotenusa es: " << c << endl;
	return 0;
}
