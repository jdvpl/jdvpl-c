#include<iostream>
using namespace std;
int main (){ 
    char nombre [50];
    int  c1,c2,c3,p1,p2,p3,tipo;
    long int subtotal ;
    float descuento , total ;
    cout<<"Digite el nombre del cliente : ";
	cin>>nombre; 
    cout << "digite la cantidad de escobas : " ;
    cin >> c1;
    cout << "digite el valor de cada escoba : " ;
    cin >> p1;
    cout << "digite la cantidad de recogedores : " ;
    cin >> c2;
    cout << "digite el valor de cada recogedor : " ;
    cin >> p2;
    cout << "digite la cantidad de aromatizantes : " ;
    cin >> c3;
    cout << "digite el valor de cada aromatizante : " ;
    cin >> p3;
    cout << "digite la categoria del cliente < de 1 a 4 >: " ;
    cin >> tipo;
    subtotal=c1*p1 + c2*p2 + c3*p3;
    switch (tipo) {
           case 1 : descuento=subtotal*0.05;
           break;
           case 2: descuento=subtotal*0.08;
           break;
           case 3: descuento=subtotal*0.12;
           break;
           case 4: descuento=subtotal*0.15;
           break;}
           total=subtotal-descuento;
           cout <<"\n";
           cout << "el cliente es : " << nombre <<"\n";
           cout << "subtotal:   $ " << subtotal <<"\n";
           cout << "descuento :  $ " << descuento <<"\n";
           cout << " total :   $ " << total <<"\n";
           cout <<"\n";
        return 0;
}
    
    

