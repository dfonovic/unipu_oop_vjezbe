#include<iostream>

using namespace std;

struct pravokutnik{
    int a;
    int b;
};
int povrsina(pravokutnik P){
    return P.a*P.b;
}

void povecaj_za(pravokutnik &P, int x){
    P.a+=x;
    P.b+=x;
}

void smanji_za(pravokutnik &P, int x){
    P.a-=x;
    P.b-=x;
}

void ispisi(pravokutnik P){
    cout<<"Stranica a: "<<P.a<<endl;
    cout<<"Stranica b: "<<P.b<<endl;
    cout<<"Povrsina: "<<povrsina(P)<<endl;
}

int main()
{
    pravokutnik P={2,4}; //kreira pravokutnik sa stranicama 2 i 4
    cout<<povrsina(P)<<endl; //vraca povrsinu pravokutnika
    povecaj_za(P,3); //povecava stranice pravokutnika za 3
    smanji_za(P,2); //smanjuje stranice pravokutnika za 2
    ispisi(P);  //ispisuje sve podatke o pravokutniku
    return 0;

}