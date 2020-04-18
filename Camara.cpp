/*"	Realizar un ejercicio en donde se muestre un menú que diga ingreso a la cámara detectora 
del segundo síntoma del covid-19.*/

#include <iostream>

using namespace std;

int main (){
	
	int temperature, tos;
	cout<<"\nCAMARA DETECTORA DE CORONAVIRUS\n\n";
	
	cout<<"\nDigita tu temperatura: "; cin>> temperature;
	
	
	{
		if(temperature<37)
		cout<<" \n\nSINTOMA NEGATIVO: No necesitas un chequeo medico.\n ";	
	
		else
		
		cout<<"\nSINTOMA POSITIVO: URGENTE Necesitas un chequeo medico\n";
	}
		cout<<"\nSi tienes tos digita 1, de lo contrario digita 2: "; cin>> tos;
	{
		if(tos!=1)
		cout<<" \n\nSINTOMA NEGATIVO: No necesitas un chequeo medico.\n ";	
	
		else
		
		cout<<"\nSINTOMA POSITIVO: URGENTE Necesitas un chequeo medico\n";
	}
		cout<<"\nPara terminar digita 0.\n ";
		cin>>temperature;
	
		
	return 0;
}
