#include "iostream"
#include "cstdlib"
using namespace std;
int main(){
	char nombre[50],seguir;
	int n_cli,cont,can,prec_uni;
	long total,global;
	system("color f1");
	system("cls");
	n_cli=1;
	global=0;
	do{
		cout<<"Nombre del cliente: "<<endl;
		cin>>nombre;
		cout<<"Cantidad de articulos comprados: "<<endl;
		cin>>can;
		cout<<"Precio unitario"<<endl;
		cin>>prec_uni;
		total=can*prec_uni;
		cout<<"El valor total a pagar por su compra  es $"<<total<<endl;
		global=global+total;
		n_cli++;
		cout<<"Siguiente cliente (s / n): "<<endl;
		cin>>seguir;
			
	}while((seguir=='s')||(seguir=='S'));
	cout<<"La ventas totales del dia fuerons de $ "<<global<<endl;
	
	return 0;
}

