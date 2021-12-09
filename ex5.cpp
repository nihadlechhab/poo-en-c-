#include <iostream>
#include <cstring>
using namespace std;
//delaration de class mère;
class animal{
	protected:
	string nom;
	float age;
	public:
	void set_value();
	animal(string n,float a);
	
};
//declaration de premier sous-class;
class zebra :public animal{
	private:
	string foret;
	public:
	void set_value();	
	zebra(string n,float a,string f);
};
//declaration de la deuxième sous-class;
class dolphin :public animal{
	private:
	string mer;
	public:
	void set_value();	
	dolphin(string n,float a,string m);
};
// definition de la constructeur de class mère;
 animal::animal(string n,float a){
          this->nom=n;
	      this->age=a;
	
 }
//definition de la methode de la class mère pour l'affichage; 
void animal::set_value(){
	cout<<"nom :"<<this->nom<<endl;
	cout<<"age :"<<this->age<<endl;
}
// definition de la constructeur du premier sous-class ;
zebra::zebra(	string n,float a,string f):animal(n,a){

	this->foret=f;
	    
}
//definition de la methode du premier sous-class pour l'affichage;
void zebra::set_value(){
	 animal::set_value();
	
	cout<<"foret :"<<foret<<endl;
  
}
// definition de la constructeur du deuxième sous-class ;
dolphin::dolphin(string n,float a,string m):animal(n,a){
	
		this->mer=m;
		
}
//definition de la methode du deuxième sous-class pour l'affichage;
void dolphin::set_value(){
	
	animal::set_value();	
	cout<<"mer :"<<mer<<endl;

}


int main(){
   
     //declaration d'un objet de type zebra;
     zebra z2("zebra 1",5.2,"afrique");
     // l'appele de la methode pour cet objet;
     z2.set_value();
     cout<<endl;
     //declaration d'un objet de type dolphin;
     dolphin d1("dolphin 1",3.5,"locean atlentique");
      // l'appele de la methode pour cet objet;
     d1.set_value();

return 0;
}
	


