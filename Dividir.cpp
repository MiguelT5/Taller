/*Git: Realizar un ejercicio en donde se pida un dato de tipo real(decimal) y lo divida entre 200.
 La respuesta debe ser de tipo float. */

#include <iostream>

using namespace std;

int main (){
	
	float dato;
	cout<<"Digita un valor decimal \n";
	cin>>dato;
	
	dato=dato/200;
	cout<<"Al dividirlo en 200, la respuesta es: "<<dato;
	
	
	return 0;
}
