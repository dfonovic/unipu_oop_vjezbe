#include <iostream>
#include <string>

using namespace std;

class Proizvod{
	private:
		string naziv;
		double cijena;
		int kolicina;
	public:
		void set(string,double,int);
		string get_n();
		double get_c();
		int get_k();
	
};

string Proizvod::get_n(){
	return naziv;
}

double Proizvod::get_c(){
	return cijena;
}

int Proizvod::get_k(){
	return kolicina;
}

void Proizvod::set(string n, double c, int k){
	naziv=n;
	cijena=c;
	kolicina=k;
}


int main(){
	Proizvod a, b, c;
	a.set("jogurt",5.99,15);
	cout<<endl<<"Podaci o proizvodu: "<<endl;
	cout<<"Naziv: "<<a.get_n()<<endl;
	cout<<"Cijena: "<<a.get_c()<<endl;
	cout<<"Kolicina: "<<a.get_k()<<endl;
	b.set("pivo", 8.99, 24);
	cout<<endl<<"Podaci o proizvodu: "<<endl;
	cout<<"Naziv: "<<b.get_n()<<endl;
	cout<<"Cijena: "<<b.get_c()<<endl;
	cout<<"Kolicina: "<<b.get_k()<<endl;
	c.set("kruh", 2.99, 10);
	cout<<endl<<"Podaci o proizvodu: "<<endl;
	cout<<"Naziv: "<<c.get_n()<<endl;
	cout<<"Cijena: "<<c.get_c()<<endl;
	cout<<"Kolicina: "<<c.get_k()<<endl;

	float ukupno = a.get_c() * a.get_k() + b.get_c() * b.get_k() + c.get_c() * c.get_k();

	cout << "Ukupna cijena proizvoda u listi je: " << ukupno << endl;

    
	return 0;
}