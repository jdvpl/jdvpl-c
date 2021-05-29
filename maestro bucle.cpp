#include <iostream>
using namespace std;
int main(){
	float pro_gral, prom,pf;
	int i,n, aprob, reprob;
	cout<<"Ingrese el numero de alumnos ";
	cin>>n;
	i=1;
	aprob=0;
	reprob=0;
	pf=0;
	pro_gral=0;	
	do {
	cout<<"ingrese el promedio del alumno "<< i << ": ";
	cin>>prom;	
	pro_gral=pro_gral+prom;
	pf=pro_gral/n;
	
	if(prom>=pf){
		aprob++;	
	}else{
		reprob++;
	}
	i++;
	}
	while (i<=n);	
	cout << endl;
	cout<<"EL promedio de los alumnos es: "<<pf<<endl;
	cout << "El numero de alumnos aprobados es de:" << aprob<<endl;
	cout << "El numero de alumnos reprobados es de:" << reprob<<endl;
	return 0;
	}

