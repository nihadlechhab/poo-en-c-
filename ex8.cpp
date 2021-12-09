#include<iostream>

 using namespace std;
   // definition de class media
   class  media{
   	 protected:
   	 	string titre;
   	 	
   	 public:
   	    // definition les methodes de la class 
		 virtual void imprimer(){
		 	cout<<" imprimer ici .";
		 }
		 virtual char *id(){
		 }	
   };
   // definition de class livre
   class livre :public media{
   	  int pages;
   	  public:
   	  	livre();
   	
   };
    // definition de class audio
    class audio : public media{
    	protected:
		float volume;
    	public:
		  audio();	
	};
	// definition de class cd
	 class cd : public audio{
    	
		string nom;
    	public:
    	   cd();	
	};
	// definition de class cassette
	 class cassette : public audio{
    	
		string nom;
    	public:
    	   cassette();	
	};
	// definition de class disque
	 class disque : public audio{
    	
		string nom;
    	public:
    	   disque();	
	};
	
	// definition de class presse
	 class presse : public media{
    	protected:
		string nom;
		
        public:
    	   presse();	
	};
	
	// definition de class magazine
	 class magazine : public presse{
    	protected:
		string nom;
		
        public:
    	   magazine();	
	};
	// definition de class journal
     class journal : public presse{
    	protected:
		string nom;
		
        public:
    	   journal();	
	};
	// definition de class revue
	 class revue : public presse{
    	protected:
		string nom;
		
        public:
    	   revue();	
	};

int main(){
	media m ;
    m.imprimer();
return 0;
}
	
	
