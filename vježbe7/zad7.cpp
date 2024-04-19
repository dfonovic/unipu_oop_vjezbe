#include <iostream>
using namespace std;

class Razlomak {
	int m_brojnik;
	int m_nazivnik;
	
public:
	
	Razlomak():m_brojnik(0), m_nazivnik(1){}
	Razlomak(int brojnik, int nazivnik = 1){
		m_brojnik = brojnik;
		m_nazivnik = nazivnik;
	
	}
	
	friend Razlomak operator+(const Razlomak&a, const Razlomak& b){
	Razlomak rezultat;
	rezultat.m_brojnik = a.m_brojnik*b.m_nazivnik + b.m_brojnik*a.m_nazivnik;
	rezultat.m_nazivnik = a.m_nazivnik*b.m_nazivnik;
	return rezultat;
	
	
	}	 
	
	friend Razlomak operator-=(Razlomak& a, Razlomak& b){
	a.m_brojnik = a.m_brojnik*b.m_nazivnik - b.m_brojnik*a.m_nazivnik;
	a.m_nazivnik = a.m_nazivnik*b.m_nazivnik;
	return a;
	
	}
	
	Razlomak operator++(){
	++m_brojnik;
	return *this;
	
	}
	
	bool operator<(Razlomak& r){
		int a, b;
		a = m_brojnik * r.m_nazivnik;
		b = m_nazivnik * r.m_brojnik;
		if(a < b) return true;
		else return false;
	
	}

	friend ostream& operator<<(ostream& izlaz, const Razlomak& razlomak);

};

ostream& operator<<(ostream& izlaz, const Razlomak& razlomak){
	izlaz<<razlomak.m_brojnik<<"/"<<razlomak.m_nazivnik;
	return izlaz;

}

// pocetak izvodenja programa
int main(){
Razlomak r1(1, 4);
Razlomak r2(2,3);

cout<<"R1= "<<r1<<endl;
cout<<"R2= "<<r2<<endl;

Razlomak r3 = r1 + r2;
cout << "R1 + R2 = "<< r3 <<endl;

Razlomak r4 = r1-=r2;
cout<<"R1 - R2 = "<< r4 <<endl;

cout<<"++R1 = "<< ++r1 <<endl;


cout<<"Prvi razlomak manji od drugog = "<< (r1 < r2) <<endl;



	system("PAUSE");
}

