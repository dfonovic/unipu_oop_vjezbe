#include <iostream>
#include <string>

using namespace std;

class Proizvod{
	private:
		string naziv;
		int kolicina;
	public:
		void set(string,int);
		string get_n();
		int get_k();
	
};

string Proizvod::get_n(){
	return naziv;
}

int Proizvod::get_k(){
	return kolicina;
}

void Proizvod::set(string n, int k){
	naziv=n;
	kolicina=k;
}


int main(){
	Proizvod a, b;
	a.set("jogurt",5.99,15);
	cout<<endl<<"Podaci o proizvodu: "<<endl;
	cout<<"Naziv: "<<a.get_n()<<endl;
	cout<<"Kolicina: "<<a.get_k()<<endl;
	b.set("pivo", 8.99, 24);
	cout<<endl<<"Podaci o proizvodu: "<<endl;
	cout<<"Naziv: "<<b.get_n()<<endl;
	cout<<"Kolicina: "<<b.get_k()<<endl;
	

	  
	return 0;
}