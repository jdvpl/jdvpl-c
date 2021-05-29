#include "iostream"
using namespace std;

int main(){
	
 float a,b,c;
 cout<< "Digite la primera nota: ";
 cin >> a,
    cout<< "Digite la segunda nota: ";
 cin >> b;
 cout<< "Digite la tercera nota: ";
 cin >> c;
 if ((a>b) && (a>c))
  cout << "La mayor nota es: " << a << endl;
 else if ((b>a) && (b>c))
  cout << "La mayor nota es: " << b << endl;
 else
  cout << "La mayor nota es: " << c << endl;
 return 0;
}
