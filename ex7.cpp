#include <iostream>
#include <math.h>
using namespace std ;
//definition de la class
 class vecteur3d
 {
 	
 float x, y, z ;
 public :
 vecteur3d (float c1, float c2, float c3);
 
 void afficher();
 	 
 vecteur3d(const vecteur3d & ) ;
	
 vecteur3d somme(const vecteur3d & );
 float produit(const vecteur3d & );
 bool coincide(const vecteur3d & );
 float norme() ;
 vecteur3d normax(vecteur3d a);
  vecteur3d *normax(vecteur3d *a);
   vecteur3d &normaxR(vecteur3d &a);
};

//definition du constructeur et la initialiser
 vecteur3d::vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
 {
 x = c1 ; y = c2 ; z = c3 ;
 }
 
 // definition du constructeur par copie et la initialiser
 vecteur3d:: vecteur3d(const vecteur3d & a) {
		x = a.x;
		y = a.y;
		z = a.z;		
	}
 // definition du fonction afficher
  void vecteur3d::afficher (){

cout <<"  le vecteur  : " <<"v("
 <<x<< ", "<<y << ", "<<z<< ") " ;
}
//la somme de deux vecteurs
vecteur3d vecteur3d ::somme(const vecteur3d & a) {
		vecteur3d v1;
		v1.x = x + a.x;
		v1.y = y + a.y;
		v1.z = z + a.z;
		return v1;
	
	}
	
	//Le produit scalaire de deux vecteurs
	float vecteur3d:: produit(const vecteur3d & a) {
		return x*a.x + y*a.y + z*a.z;
	}
	
	//tester si deux vecteurs ont les memes composantes
	bool  vecteur3d::coincide(const vecteur3d & a) {
		return (x == a.x && y == a.y && z == a.z);
	}
	
	//Retourner la norme du vecteur
	float vecteur3d:: norme() {
		return sqrt(x*x + y*y + z*z);
	}
	
	//Retourner le vecteur qui la plus grande norme : par valeur
	vecteur3d vecteur3d:: normax(vecteur3d a) {
		if( this->norme() > a.norme())
		    return *this;
		    
		return a;
	}
	
	//Retourner le vecteur qui la plus grande norme : par adresse
	vecteur3d* vecteur3d::normax(vecteur3d * a) {
		if( this->norme() > a->norme())
		    return this;
		    
		return a;
	}
	
	//Retourner le vecteur qui la plus grande norme : par reference
	vecteur3d& vecteur3d::normaxR(vecteur3d &a) {
		if( this->norme() > a.norme())
		    return *this;
		    
		return a;
	}

int main(){
	
	//definition de premier objet
	vecteur3d v1(1,2,3);
	cout << "Vecteur V1"<<endl;
	v1.afficher();
	cout <<endl;
	//definition de la deuxième objet
	vecteur3d v2(5,6,7);
	cout <<"Vecteur V2"<<endl;
	v2.afficher();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
	cout<<endl;	
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
	cout << "Copier le vecteur V1 dans V3:" << endl;
	vecteur3d v3(v1);
		cout<<endl;
	cout << "Vecteur V3";
	v3.afficher();
		cout<<endl;
	if(v1.coincide(v3))
	    cout << "Les vecteurs v1 et v3 coincident " << endl; 
	else
	    cout << "Les vecteurs v1 et v3 ne coincident pas " << endl;
	
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
		cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
		cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	
	(v1.normaxR(v2)).afficher();
	cout<<endl;
return 0;
}
