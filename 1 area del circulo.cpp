#include <iostream>
#include <cmath>
using namespace std;
// Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
// radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
//radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
// resultado del área calculada.
// ENTRADAªº  r: radio   
//SALIDAºº  a: area del circulo

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
