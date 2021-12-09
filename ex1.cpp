#include <iostream>
using namespace std;
//definition de la classe.
class MyClass    
{
public:
    MyClass(void);           // Le constructeur par defaut.
    ~MyClass(void);          // Le destructeur.
};
//definition de construceur.
MyClass::MyClass(void)
{ 
	cout<<"je suis le constructeur"<<endl;
}
//definition de construceur.
MyClass::~MyClass()
{
	cout<<"je suis le destructeur"<<endl;
}

int main() {
	//l'appele de la constructeur
    MyClass *p;
    p=new MyClass ; 
	// appele de la destructeur  
     delete p;
 
	return 0;
}
