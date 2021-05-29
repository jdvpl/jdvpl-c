#include "iostream"
#include "cstdlib"

using namespace std;

int main(){
	int n_ven,cont,sec,ven,pag;
	system("color f1");
	system("cls");
	char nom[50];

	cout<<"ingrese la cantidad de vendedores \n";
	cin>>n_ven;
	
	sec=1;
	cont=1;
	while(sec<=n_ven){
		cout<<"ingrese el monto de sus ventas"<<endl;
		cin>>ven;
		pag=ven*0.09 +5000;
		cout<<"El valor a pagar por ventas es de: "<<pag<<endl;
		sec++;
		if(pag>8000){
			cont++;
		}
		
	}
	cout<<"La cantidad de vendedores cuyo pago excedio a $8000 es de "<<cont<<endl;
	
	return 0;
}

