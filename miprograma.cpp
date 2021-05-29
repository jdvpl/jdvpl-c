#include<iostream>

using namespace std;

int main(){
	
	float n1, n2, sum=0,res=0,mul=0,div=0;
	
	cout<<"digite el primer numero \n";
	cin>>n1;
	cout<<"digite el segundo numero \n";
	cin>>n2;
	
	sum=n1+n2;
	res=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	
	
	cout<<"\nLa suma es igual a "<<sum<<endl;
	cout<<"\nLa resta es igual a "<<res<<endl;
	cout<<"\nLa multiplicacion es igual a "<<mul<<endl;
	cout<<"\nLa division es igual a "<<div<<endl;
	
	return 0;

}
