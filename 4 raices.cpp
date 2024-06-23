#include <iostream>
#include <cmath>
using namespace std;
//Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
//ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
//calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
//raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.
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
