#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a, b, c, r1, r2, d;
	cout << "Indique el termino cuadratico (a): ";
	cin >> a;
	cout << "Indique el termino lineal (b): ";
	cin >> b;
	cout << "Indique el termino independiente (c): ";
	cin >> c;
	d=b*b - 4*a*c;
	if(d<0){
		cout << "Sus raices no son numeros reales. Intente de nuevo." << endl;
	} else if(d==0){
		r1 = (-b+sqrt(d))/2*a;
		cout << "La raiz de la ecuacion cuadratica es " << r1 << endl;
	} else {
		r1 = (-b+sqrt(d))/2*a;
		r2 = (-b-sqrt(d))/2*a;
		cout << "Las raices de la ecuacion cuadratica son " << r1 << " y " << r2 << endl;
	}
		
	return 0;
}
