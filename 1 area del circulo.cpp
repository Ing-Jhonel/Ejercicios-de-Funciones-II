#include <iostream>
#include <cmath>
using namespace std;
// C�lculo del �rea de un C�rculo: Implementa un programa que calcule el �rea de un c�rculo dado su
// radio. Utiliza la constante M_PI de la librer�a cmath para obtener el valor de pi. Solicita al usuario el
//radio del c�rculo y utiliza la funci�n pow de cmath para calcular el cuadrado del radio. Muestra el
// resultado del �rea calculada.
// ENTRADA��  r: radio   
//SALIDA��  a: area del circulo

int main (){
	
	double r, a;
	cout << "Indique el radio del circulo: ";
	cin >> r;
	double pi;
	pi=M_PI;
	a=pi*pow(r, 2);
	cout << "El area del circulo es: " << a << endl;
	return 0;
}
