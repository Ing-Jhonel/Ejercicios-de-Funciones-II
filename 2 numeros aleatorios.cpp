#include <iostream>
#include <cstdlib>
#include <ctime>
//Crea un programa que genere y muestre una serie de números
//aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
//la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
//rand de la librería cstdlib para generar los números aleatorios.
//ENTRADA|| cantidadnumeros: cantidad de numeros a generar  vm: valor maximo o limite
//SALIDA|| n1, n2, n3 .... nn: numeros generados aleatoriamente

using namespace std;

int main() {
	
	srand(time(0)); 
	int cantidadnumeros, limitemaximo, numerogenerado;
	cout << "Ingrese el limite maximo: ";
	cin >> limitemaximo;
		
	cout << "Indique cuantos numeros quiere ver entre el 0 y " << limitemaximo << " : ";
	cin >> cantidadnumeros;
	cout << endl;

	for(int i=1; i<=cantidadnumeros; i++){
		numerogenerado = rand() % limitemaximo + 1;
		cout << numerogenerado << " ";
	}
    return 0;
}

