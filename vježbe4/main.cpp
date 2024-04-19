/*
Zadatak:

Zadana je slijedeća struktura:

struct Vrijeme {
	int sat;
	int min;
	int sek;
	};



Napišite kompletnu strukturu Vrijeme i dodajte joj slijedeće funkcije:
void postavi(h,m,s) – postavlja objekt na zadano vrijeme
void ispis() – ispisuje objekt u formatu hh:mm:ss
void promjeni(a,b,c) – na trenutno vijeme doda a:b:c
int sekunde() – vraća vrijednost vremena u sekundama
void ispis12() – ispisuje 24 satno vrijeme u formatu 12-satnog (npr. 9:12:45 AM)
U glavnom programu demonstrirajte rad funkcija.
*/

#include <iostream>
using namespace std;
	struct Vrijeme{
		int sat; int min; int sek;
		void postavi(int, int, int);
		void ispis();
		void promjeni(int, int, int);
		int sekunde();
		void ispis12();
		};
		
	void Vrijeme::postavi(int h, int m, int s){
		sat = h; 
		min = m; 
		sek = s;
	}
	
	void Vrijeme::ispis(){
	cout<<sat<<":"<<min<<":"<<sek<<endl;
}

	void Vrijeme::promjeni(int h, int m, int s){
		sat += h;
		min += m;
		sek += s;
	}

	int Vrijeme::sekunde(){
	int a=sat*3600;
	int b=min*60;
	int c=sek+a+b;
	return c;
}
	
	void Vrijeme::ispis12(){
	if (sat==13) sat=1;
	if (sat==14) sat=2;
	if (sat==15) sat=3;
	if (sat==16) sat=4;
	if (sat==17) sat=5;
	if (sat==18) sat=6;
	if (sat==19) sat=7;
	if (sat==20) sat=8;
	if (sat==21) sat=9;
	if (sat==22) sat=10;
	if (sat==23) sat=11;
	if (sat==24) sat=12;
	cout<<sat<<":"<<min<<":"<<sek<<"PM"<<endl;
}
	
	
int main (){
	
	Vrijeme t;
	
	t.postavi(8,15,25);
	t.ispis();
	t.promjeni(5, 54, 14);
	t.ispis();
	
	return 0;
}
