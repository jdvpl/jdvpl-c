#include <iostream>
#include<string>
using namespace std;
int main()
	{
	char nombre[20];
	int cont,edad,equipo,jugadores;
	int long peso,edad_total,peso_total,peso_promedio, edad_promedio;
	edad_total=0;   
	peso_total=0; 
	jugadores=0;
	cout<< "Equipo No:\n";
	cin>>equipo;
	cout<< "Jugadores No:\n";
	cin>>jugadores;
	for (cont=1; cont<=jugadores;cont++)
	{
	 cout<< "\nNombre del jugador"<<cont<<":\t";   //datos de los jugadores
	 cin >>nombre;
	 cout<< "peso del jugador en Kg:\t";
	 cin>> peso;
	 cout<< "Edad del jugador:\t";
	 cin>> edad;cout<<"\n";  
	 peso_total=peso_total+peso;        //almacenan todos los valores de el peso del equipo
	 edad_total=edad_total+edad;        //almacenan todos los valores de la edad del equipo 
	}	 
	peso_promedio=peso_total / jugadores;
	edad_promedio=edad_total /jugadores;
	cout<< "Equipo No:\t\t"<<equipo<<"\n\n";
	cout<<"El peso promedio general del equipo es:\n"<<peso_promedio <<"Kg"<<"\n\n";
	cout<<"La edad promedio general del equipo es:\n"<<edad_promedio <<"Anos"<<"\n\n";	
	return 0;   
	}
