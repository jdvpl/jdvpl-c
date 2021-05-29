#include "iostream"
using namespace std;
int main(){
	int n,u,d;
 cout<< "Digite un numero entre 1 y 99: \n ";
 cin >> n;
 while((n<1)||(n>99)){
 	cout<<"Digite un numero entre 1 y 99: \n";
 	cin>>n;
 }
 u=n%10;
 d=n/10;
 cout<<"El numero "<<n<<" en romano es: ";
 switch(d){
 	case 1:cout<<"X"; break;
 	case 2:cout<<"XX";break;
 	case 3:	cout<<"XXX";break;
 	case 4:cout<<"XL";break;
 	case 5:	cout<<"L";break;
 	case 6:cout<<"LX";break;
 	case 7:cout<<"LXX";break;
 	case 8:cout<<"LXXX";break;
 	case 9:cout<<"XC";break;
 }
 switch(u){
 	case 1:cout<<"I";break;
 	case 2:cout<<"II";break;
 	case 3:cout<<"III";break;
 	case 4:cout<<"IV";break;
 	case 5:cout<<"V";break;
 	case 6:cout<<"VI";break;
 	case 7:cout<<"VII";break;
 	case 8:cout<<"VIII";break;
 	case 9:cout<<"IX";break;
 }
 cout<<"\n";
 
 return 0;
	
}
