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
	cout << "Povrsina kvadrate je: " << *stranica << endl; 
}

int main(){
	
	Kvadrat k1;
	cout << k1.get() << endl;
	Kvadrat k2(14.3);
	cout << k2.get() << endl;
	k1.set(12.7);
	cout << k1.get() << endl;
	k1.ispis();
	
}
