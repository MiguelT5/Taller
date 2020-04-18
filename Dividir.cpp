/*Git: Realizar un ejercicio en donde se pida un dato de tipo real(decimal) y lo divida entre 200.
 La respuesta debe ser de tipo float. */

#include <iostream>

using namespace std;

int main (){
	
	float dato;
	cout<<"Digita un valor decimal \n";
	cin>>dato;
	
	dato=dato/100;
	cout<<"Al dividirlo en 100, la respuesta es: "<<dato;
	
	
	return 0;
}
