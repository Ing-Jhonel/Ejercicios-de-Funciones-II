#include <iostream>
#include <cstdlib>
#include <ctime>
//Crea un programa que genere y muestre una serie de n�meros
//aleatorios entre 0 y un n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario
//la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n
//rand de la librer�a cstdlib para generar los n�meros aleatorios.
//ENTRADA|| cantidadnumeros: cantidad de numeros a generar  limitemaximo: valor maximo o limite
//SALIDA|| numerogenerado1, numerogenerado2, numerogenerado3 .... nn: numeros generados aleatoriamente

using namespace std;

int main() {
	
	srand(time(0)); 
	int cantidadnumeros, limitemaximo, numerogenerado;
	cout << "GENERADOR DE NUMEROS ALEATORIOS" << endl;
	cout << "--------------------------------" << endl << endl;
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

