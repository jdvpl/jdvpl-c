#include "iostream"
using namespace std;
int main(){
	char nom[50];
	float cos,total;
	cout << "digite el nombre del articulo: ";
    cin >> nom;
    cout << "digite el costo del articulo ";
    cin >> cos;
	
	if((cos<=30)&&(cos>=0)){
		total=cos;
		cout << "el costo del articulo "<<nom<< " es : "<<total<<
		" pesos ya que es menor que 30 ";
	}else if((cos>30)&&(cos<=40)){
		total=cos*1.3;
		cout << "el costo del articulo "<<nom<< " es : "<<total<<
		" pesos con un porcentaje de impuesto de 30%";
	}else if((cos>40)&&(cos<=400)){
		total=cos*1.4;
		cout << "el costo del articulo "<<nom<< " es : "<<total<<
		" pesos con un porcentaje de impuesto de 40%";
	}else if(cos>400){
		total=cos*1.5;
		cout << "el costo del articulo "<<nom<< " es : "<<total<<
		" pesos con un porcentaje de impuesto de 50%";
	}
return 0;	
}
