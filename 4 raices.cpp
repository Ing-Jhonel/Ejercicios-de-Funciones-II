#include <iostream>
#include <cmath>
using namespace std;
//C�lculo de Ra�ces de una Ecuaci�n Cuadr�tica: Crea un programa que calcule las ra�ces de una
//ecuaci�n cuadr�tica utilizando la f�rmula general. Utiliza la funci�n sqrt de la librer�a cmath para
//calcular la ra�z cuadrada. Solicita al usuario los coeficientes de la ecuaci�n (a, b, c) y muestra las
//ra�ces obtenidas. Considera los casos en los que las ra�ces son reales o complejas.
//ENTRADA|| a: termino cuadratico  b: termino lineal  c: termino independiente
//SALIDA|| raiz1: primera raiz  raiz2: segunda raiz

int main(){
	
	// usamos el sqrt para sacar la raiz cuadratica de un numero
	int a, b, c, raiz1, raiz2, discriminante;
	cout << "Indique el termino cuadratico (a): ";
	cin >> a; 
	cout << "Indique el termino lineal (b): ";
	cin >> b;
	cout << "Indique el termino independiente (c): ";
	cin >> c;
	discriminante=b*b - 4*a*c; //mantengo como variable la discriminante, para no estar copiando la misma operacion
	if(discriminante<0){ //si la discriminante es menor a cero, sus raices no son reales
		cout << "Sus raices no son numeros reales. Intente de nuevo." << endl;
	} else if(discriminante==0){ //si la discriminante es cero, sus raices son iguales
		raiz1 = (-b+sqrt(discriminante))/2*a;
		cout << "La raiz de la ecuacion cuadratica es " << raiz1 << endl;
	} else { // si la discriminante es mayor a cero (caso contrario a lo anterior) sus raices son reales y diferentes
		raiz1 = (-b+sqrt(discriminante))/2*a;
		raiz2 = (-b-sqrt(discriminante))/2*a;
		cout << "Las raices de la ecuacion cuadratica son " << raiz1 << " y " << raiz2 << endl;
	}	
	return 0;
}
