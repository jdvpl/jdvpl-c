#include <iostream>
using namespace std;
int main(){
	int num, c1, c2;
	char con;
	do {
	cout<<"ingrese un numero positivo de 2 cifras: "<< "\n";
	cin>>num;
	c1=num%10;
	c2=num/10;
	cout<<"El numero original es : "<< num <<" y el invertido es: "
	<< c1 << c2 <<"\n";
	cout << "desea continuar con otro numero (S/N): " << "\n";
	cin >> con;
	}
	while ((con=='s')||(con=='S'));	
	cout << "Fin de la aplicacion" << "\n";	
	return 0;
	}

