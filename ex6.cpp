#include <iostream>
#include <math.h>
#include <cstring>
using namespace std ;
// definition du premier class 
    class Personne
    {
        protected :
		string nom;
        string prenom;
        string datenaissance;
        
    public: 
        // definition du constructeur et la initialiser
		 Personne(string n, string p, string dn)
        {
            nom = n;
            prenom = p;
            datenaissance = dn;
        }
        // definition de fonction d'affichage
         virtual void Afficher()
        {
            cout<<"nome :"<<nom<<endl;
            cout<<"prenom :"<<prenom<<endl;
            cout<<"date de naissance :"<<datenaissance<<endl;
        }
    };
    // // definition du class employer:
    class Employe :public Personne
    {
        private:
		double salaire;
 
        public:
        	// definition du constructeur et la initialiser
        	 Employe(string n, string p, string dn, double s): Personne(n, p, dn)
            
        {
            salaire = s;
        }
        // definition la fonction d'affichage
         void Afficher()
        {
              Personne::Afficher();
            cout<<" salaire:"<<salaire<<endl;
        }
    };
// class chef:
    class Chef : public Employe
    {
        private: 
		string service;
 
     public:
     	// definition du constructeur et la initialiser
     	Chef(string n, string p, string dn, double s, string ser):Employe(n, p, dn,s)
            
        {
            service = ser;
        }
        // definition la fonction d'affichage
        void Afficher()
        {
            Employe::Afficher();
            cout<<" service:"<<service<<endl;
        }
    };
// class dericteur;
    class Directeur : public Chef
    {
        private :
		string societe;
        
        public:
        // definition du constructeur et la initialiser
        	Directeur(string n, string p, string dn, double s, string ser, string soc)  :Chef(n, p, dn, s, ser)
            
        {
            societe = soc;
        }
        // definition la fonction d'affichage
        void Afficher()
        {
            Chef::Afficher();
            cout<<" societe :"<<societe<<endl;
        }
    };
 
 int main(){
 	
 	// definition d'un objet de class personne
 	 Personne  *P[3];
           
            P[0] = new Employe("Nom E", "Prenom E", "1985-3- 4", 9000);
            P[1] = new Chef("Nom C", "Prenom C", "1985-3- 4", 9000, "SERVICE2");
            P[2] = new Directeur("Nom D", "Prenom D", "1985-3- 4", 9000, "SERVICE3","SOCIETE1");
             for (int i = 0; i < 3; i++)
            {
            	//l'appel de fonction d'affichage
                P[i]->Afficher();                      
               
            }
 	
 	return 0;
 }
    
    


