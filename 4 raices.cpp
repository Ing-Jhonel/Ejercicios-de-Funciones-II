#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a, b, c, raiz1, raiz2, discriminante;
	cout << "Indique el termino cuadratico (a): ";
	cin >> a;
	cout << "Indique el termino lineal (b): ";
	cin >> b;
	cout << "Indique el termino independiente (c): ";
	cin >> c;
	discriminante=b*b - 4*a*c;
	if(discriminante<0){
		cout << "Sus raices no son numeros reales. Intente de nuevo." << endl;
	} else if(discriminante==0){
		raiz1 = (-b+sqrt(discriminante))/2*a;
		cout << "La raiz de la ecuacion cuadratica es " << raiz1 << endl;
	} else {
		raiz1 = (-b+sqrt(discriminante))/2*a;
		raiz2 = (-b-sqrt(discriminante))/2*a;
		cout << "Las raices de la ecuacion cuadratica son " << raiz1 << " y " << raiz2 << endl;
	}
		
	return 0;
}
