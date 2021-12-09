#include <iostream>

using namespace std;
 // definition du class Test
 class Test{
 	static int i;// variable statique
 	public:
 		// definition de la fonction call
 		void call(){
 			cout<<"i'm here"<<endl;
 			i++;
		 }
 	// definition de la fonction statique
 	static int afficher(){
 		return i;
	 }
 	
 };
 
 //initialisation de variable statique 
int Test::i=0;
int main(){
	// definition d'un objet
	Test t;
	t.call();
	t.call();
	t.call();
	t.call();
	// l'appele de la fonction statiique afficher 
	cout<<"le nombre d'appele la fonction call est :"<<t.afficher();
	
}
