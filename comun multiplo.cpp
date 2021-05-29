#include <iostream>
using namespace std;
int main(){
  int num1,num2,mod=0,mcm=0,min;
  cout<<"Ingrese el primer numero: ";cin>>num1;
  cout<<"Ingrese el segundo numero: ";cin>>num2;
  if(num1<num2){
      min=num1;
    }
    else if(num2<=num1){
      min=num2;
    }
    else if(num1<num2){
      min=num1;
    }
  for(int i=1;i<=min;i++){
    if(num1%i==0 && num2%i==0){
      mod=i;
      mcm=num1*num2/mod;
    }
  }
  cout<<"El M.C.M de "<<num1<<" y "<<num2<<" es "<<mcm<<endl;
  return 0 ;
}

