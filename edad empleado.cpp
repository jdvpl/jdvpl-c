#include <iostream>
using namespace std;
int main()
{
   int i,n,dd,mm,aa,dia,mes,anno;
   float dif, actual,nacim,edad;
   cout<<"Numero de empleados: ";
   cin>>n;
   cout<<"Digite le dia actual (1 a 31): ";
   cin>>dia;
   while ((dia<1)||(dia>31)){
   	cout<<"\7\7\7Error!!! Dia no valido"<<endl;
   	cout<<"Digite le dia actual (1 a 31): ";
   	cin>>dia;
   }
   cout<<"Digite el mes actual (1 a 12): ";
   cin>>mes;
   while ((mes<1)||(mes>12)){
   	cout<<"\7\7\7Error!!! mes no valido"<<endl;
   	 cout<<"Digite el mes actual (1 a 12): ";
   cin>>mes;
   }
   cout<<"Digite el año actual ";
   cin>>anno;
   actual=anno+(mes/12)+(dia/365);
   for(i=1;i<=n;i++){
   	cout<<"Empleado No. "<<i<<endl;
   	cout<<"Dia de nacimiento (1 a 31): ";
   	cin>>dd;
   	while ((dd<1)||(dd>31)){
   	cout<<"\7\7\7Error!!! Dia no valido"<<endl;
   	cout<<"Digite el dia actual (1 a 31): ";
   	cin>>dd;
   }
   cout<<"Digite el mes actual (1 a 12): ";
   cin>>mm;
   while ((mm<1)||(mm>12)){
   	cout<<"\7\7\7Error!!! mes no valido"<<endl;
   	 cout<<"Digite el mes actual (1 a 12): ";
   cin>>mm;
   }
   cout<<"Digite el año de nacimiento ";
   cin>>aa;
   nacim=aa+(mm/12)+(dd/365);
   dif=actual-nacim;
   edad=(int)dif;
   cout<<"La edad del empleado "<<i<<" es "<< edad<<" años "<<endl<<endl;
   }
   return 0;
}

