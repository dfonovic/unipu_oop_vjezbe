
/*
Zadatak:
Definirajte klasu Kvadrat koja se sastoji od duljine stranice (pokazivac na float). Klasa treba sadržavati i slijedece elemente:

Defaultni konstruktor koji dinamicki alocira memoriju za stranicu i postavlja vrijednosti atributa na 0
Konstruktor sa argumentima koji dinamicki alocira memoriju za atribut i i postavlja vrijednost atributa na vrijednost argumenta funcije
Kopirni konstruktor
Destruktor koji alocira memoriju
set i get funkciju
funkciju print koja ispisuje vrijednost površine kvadrata na ekran
U main funkciji treba demonstrirati rad svih elemenata klase.
 */

#include<iostream>
using namespace std;

class Kvadrat{
	float* stranica;
	public:
		Kvadrat();
		Kvadrat(float);
		~Kvadrat();
		float get();
		void set(float);
		void ispis();
		
};


Kvadrat::Kvadrat(){
	stranica = new float;
	*stranica = 0;
}

Kvadrat::Kvadrat(float a){
	stranica = new float;
	*stranica = a;
}

Kvadrat::~Kvadrat(){
	delete [] stranica;
}

float Kvadrat::get(){
	return *stranica;
}

void Kvadrat::set(float a){
	*stranica = a;
}


void Kvadrat::ispis(){
	cout << "Povrsina kvadrata je: " << (*stranica) * (*stranica) << endl; 
}

int main(){
	
	Kvadrat k1;
	cout << "a=" << k1.get() << endl;
	Kvadrat k2(14.3);
	cout << "a=" << k2.get() << endl;
	k1.set(12.7);
	cout << k1.get() << endl;
	k1.ispis();
	
}
