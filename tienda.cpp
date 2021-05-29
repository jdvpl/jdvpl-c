#include "iostream"
using namespace std;

int main(){
	int b,r,s,p1,p2,p3,pago;
    float descuento , total;
    
    cout << "digite la cantidad de brochas de cerda : ";
    cin >> b;
    cout << "digite el valor de cada brocha : ";
    cin >> p1;
    cout << "digite la cantidad de rodillos: " ;
    cin >> r;
    cout << "digite el valor de cada rodillo: ";
    cin >> p2;
    cout << "digite la cantidad sellador: " ;
    cin >> s;
    cout << "digite el valor del sellador : ";
    cin >> p3;
    cout << "forma de pago (1: contado / 2: credito): \n" ;
    cin >>pago;
         
          if (pago==1){
          	total=b*p1*0.8 + r*p2*0.85 + s*p3;
          	total=total*0.93;
          	cout <<"el total a pagar es por ser de contado es: " << total
			   <<"\nescogistes "<<b<<" brochas, "<<
			    r<<" rodillos, "<< s<<" selladores"<<endl;
          }else{
          	total=b*p1*0.8 + r*p2*0.85 + s*p3;
          	cout << "el total a pagar es : " << total << endl;
          }
          return 0;
}

