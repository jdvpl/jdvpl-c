#include <iostream>
using namespace std;
int main(){
  char resp;
  int i,p,l,c;
  long to;
  to=0;
  for(int i=0;;i++){
    	cout<<"Costo de papeleria:  ";
		cin>>p;
		cout<<"Costo de lapices:  ";
		cin>>l;
		cout<<"Costo de copias:  ";
		cin>>c;
     to=to+p+l+c;
     	cout<<"Hay mas gastos? (S/N):  ";
     	cin>>resp;
     	if((resp=='n')||(resp=='N'))
     	break;
    }
  cout<<"\nEl gato del dia es de $ "<<to<<endl;
  return 0 ;
}

