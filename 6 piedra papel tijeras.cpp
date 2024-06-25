#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y tijeras contra la computadora. El usuario elegirá su jugada 
//(piedra, papel o tijeras) y la computadora generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las reglas del juego. 
//El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el resultado final indicando el ganador del juego.
//ENTRADA|| s: jugada del usuario
//SALIDA|| resultado: quien gano en cada round || 
int main(){
	
	srand(time(0));
	int spc, vs=0, vspc=0;
	string s, aux, resultado;
	
	// 1 Piedra, 2 papel, 3 tijeras
	int i=1;
	cout << "JUEGA YANKENPO CON LA COMPUTADORA" << endl;
	cout << "*********************************" << endl << endl;
	do{
		cout << "_______________________" << endl << endl;
		cout << i << ". ROUND." << endl << endl;
		cout << "Ingrese su jugada: ";
		cin >> s;
		cout << endl;
		spc = rand() % 3+1;
		if (spc==1){
			aux = "Piedra";
		} else if (spc==2){
			aux = "Papel";
		} else{
			aux = "Tijera";
		}
		cout << "Usuario: " << s << endl;
		cout << "Computadora: " << aux << endl << endl;
		if (s==aux){
			resultado= "Empate.";
		} else if (s=="Piedra" && aux=="Tijera" || s=="Papel" && aux=="Piedra" || s=="Tijera" && aux=="Papel"){
			resultado= "Gano el usuario.";
			vs=vs+1;
		} else {
			resultado= "Gano la computadora.";
			vspc=vspc+1;
		}
		i++;
		cout << "*Resultado: " << resultado << endl;
		cout << endl;
		
	} while(vs!=3 && vspc!=3);
	cout << "_______________________" << endl << endl;
	if(vs==3){
		resultado= "Gano el usuario.";
	} else{
		resultado= "Gano la computadora.";
	}
	cout << "********************************" << endl;
	cout << "Fin del juego. " << resultado << endl;
	cout << "********************************" << endl;
	return 0;
	
}
