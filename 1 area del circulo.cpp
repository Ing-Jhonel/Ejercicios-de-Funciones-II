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
	
	double radio, areadelcirculo;
	cout << "CALCULA EL AREA DE TU CIRCULO" << endl;
	cout << "*****************************" << endl << endl;
	cout << "Indique el radio del circulo: ";
	cin >> radio;
	cout << endl;
	double pi;
	pi=M_PI;
	areadelcirculo=pi*pow(radio, 2);
	cout << "--------------------------------" << endl << endl;
	cout << "El area del circulo es: " << areadelcirculo << endl;
	return 0;
}
