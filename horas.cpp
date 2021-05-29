#include "iostream"
using namespace std;

int main(){
	double hr,cu,he,ht,t;
	char nom[50];

	cout<<"Por favor Digite su nombre ";
	cin>>nom;
	cout<<"Digite el numero de horas trabajadas ";
	cin>>hr;
	cout<<"Digite el valor de la hora ";
	cin>>cu;
	if((hr<=40)&&(hr>=0)){
		cu=cu*hr;
		cout<<nom<<" Trabajastes "<<hr<<" horas, y valor que ganastes es: "<<cu<<endl;
	}else if((hr>40)&&(hr<=50)){
		he=hr-40;
		he=he*cu*2;
		cu=40*cu+he;
		cout<<nom<<" Trabajastes "<<hr<<" horas, y valor que ganastes es: "<<cu<<", y el valor por la horas extras es: "<<he;
	}else if(hr>50){
		ht=hr-50;
		he=10*cu*2;
		ht=ht*3*cu;
		t=ht+he;
		cu=40*cu+t;
		cout<<nom<<" Trabajastes "<<hr<<" horas, y valor que ganastes es: "<<cu<<", y el valor por la horas extras es: "<<t;
	}else{
		cout<<nom<<" el numero de horas es negativo asi que le debes a la empresa jajaja";
	}
	
	return 0;
}

