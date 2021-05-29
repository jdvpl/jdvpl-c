#include "iostream"
using namespace std;

int main(){
	int m;
	char b;
	cout<<"Digite el mes en numeros \n1: Enero \n2: Febrero"<<
	"\n3: Marzo \n4: Abril \n5: Mayo \n6: Junio \n7: Julio \n8: Agosto"<<
	"\n9: Septiembre \n10: Octubre \n11: Noviembre \n12: Diciembre \n";
	cin>>m;
	
	if(m==1){
		cout<<"el mes que has escogido es Enero "<<
		"el cual tiene 31 dias\n";
	}else if(m==2){
		cout<<"Escribe si el año es bisiesto (s: si / n: no):\n";
		cin>>b;
		if((b=='s')||(b=='S')){
			cout<<"El año es bisiesto \n";
			cout<<"El mes escogido es Febrero por ende tiene 29 dias";
		}else if((b=='n')||(b=='N')){
			cout<<"El año no es bisiesto \n";
			cout<<"El mes escogido es Febrero por ende tiene 28 dias";
		}else{
			cout<<"La opcion escogida es incorrecta";
		}
	}else if(m==3){
		cout<<"el mes que has escogido es Marzo "<<
		"el cual tiene 31 dias\n";
	}else if(m==4){
		cout<<"el mes que has escogido es Abril "<<
		"el cual tiene 30 dias\n";
	}else if(m==5){
		cout<<"el mes que has escogido es Mayo "<<
		"el cual tiene 31 dias\n";
	}else if(m==6){
		cout<<"el mes que has escogido es Junio "<<
		"el cual tiene 30 dias\n";
	}else if(m==7){
		cout<<"el mes que has escogido es Julio "<<
		"el cual tiene 31 dias\n";
	}else if(m==8){
		cout<<"el mes que has escogido es Agosto "<<
		"el cual tiene 31 dias\n";
	}else if(m==9){
		cout<<"el mes que has escogido es Septiembre "<<
		"el cual tiene 30 dias\n";
	}else if(m==10){
		cout<<"el mes que has escogido es Octubre "<<
		"el cual tiene 31 dias\n";
	}else if(m==11){
		cout<<"el mes que has escogido es Noviembre "<<
		"el cual tiene 30 dias\n";
	}else if(m==12){
		cout<<"el mes que has escogido es Diciembre "<<
		"el cual tiene 31 dias\n";
	}else{
		cout<<"La opcion escogida es incorrecta ";
	}
	return 0;
}
