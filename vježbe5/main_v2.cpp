#include<iostream>

using namespace std;

class Pravokutnik{
	float* stranica_a;
	float* stranica_b;
	public:
		Pravokutnik();
		Pravokutnik(float,float);
		~Pravokutnik();
		float get_a();
		float get_b();
		void set(float,float);
		void ispis();
		
};


Pravokutnik::Pravokutnik(){
	stranica_a = new float;
	stranica_b = new float;
	*stranica_a = 0;
	*stranica_b = 0;
}

Pravokutnik::Pravokutnik(float a, float b){
	stranica_a = new float;
	stranica_b = new float;
	*stranica_a = a;
	*stranica_b = b;
}

Pravokutnik::~Pravokutnik(){
	delete [] stranica_a;
	delete [] stranica_b;
}

float Pravokutnik::get_a(){
	return *stranica_a;
}

float Pravokutnik::get_b(){
	return *stranica_b;
}

void Pravokutnik::set(float a, float b){
	*stranica_a = a;
	*stranica_b = a;
	
}


void Pravokutnik::ispis(){
	cout << "Povrsina pravokutnika je: " << (*stranica_a) * (*stranica_b) << endl; 
}

int main(){
	
	Pravokutnik p1;
	cout << "a= " << p1.get_a() <<" b=" << p1.get_b() << endl;
	Pravokutnik p2(14.3, 18.5);
	cout << "a= " << p2.get_a() <<" b=" << p2.get_b() << endl;
	p1.set(12.7, 9.2);
	cout << "a= " << p1.get_a() <<" b="  << p1.get_b() << endl;
	p1.ispis();
	
}
