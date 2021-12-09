#include <iostream>
using namespace std;
//definition du class mère
class mere{
	public:
	void display();
};
//definition du class fille
class fille :public mere{
	public:
	void display();
};
// definition de la fonction de class mere
void mere::display(){
	cout<<"je suis la mere .";
}
// definition de la fonction de class fille
void fille::display(){
	cout<<"je suis la fille .";
}

int main(){
	// definition d'un objet de class fille
	fille f1;
	//l'appel de fnction
	f1.display();
	
}
