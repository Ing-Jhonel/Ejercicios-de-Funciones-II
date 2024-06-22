#include <iostream>
#include <cstdlib>
#include <ctime>
//Crea un programa que genere y muestre una serie de números
//aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
//la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
//rand de la librería cstdlib para generar los números aleatorios.
//ENTRADA|| cantidadnumeros: cantidad de numeros a generar  limitemaximo: valor maximo o limite
//SALIDA|| numerogenerado1, numerogenerado2, numerogenerado3 .... nn: numeros generados aleatoriamente

using namespace std;

int main() {
	
	srand(time(0)); // con esto el generador de numeros inicia desde 0 
	int cantidadnumeros, limitemaximo, numerogenerado;
	cout << "GENERADOR DE NUMEROS ALEATORIOS" << endl;
	cout << "--------------------------------" << endl << endl;
	cout << "Ingrese el limite maximo: ";
	cin >> limitemaximo;
		
	cout << "Indique cuantos numeros quiere ver entre el 0 y " << limitemaximo << " : ";
	cin >> cantidadnumeros;
	cout << endl;
	
 	for(int i=1; i<=cantidadnumeros; i++){
		numerogenerado = rand() % limitemaximo + 1; // le agregamos un variable a cada numero generado, para que se muestre
		// el rand() es predeterminado. El % (limitemaximo + 1) dice que entre el numero que hemos puesto a iniciar antes (0)
		// hasta el limite maximo + 1 ej: 0 < numerogenerado <= limitemaximo + 1  ||  0 < numero generado < limitemaximo
		cout << numerogenerado << " ";
	}
    return 0;
}

